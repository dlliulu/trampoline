//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'cocoaGOIL.mm'                             *
//                        Generated by version 1.8.5                         *
//                       july 1st, 2009, at 18h49'42"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "version_libpm.h"
#if LIBPM_VERSION != 515
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

#import "F_CocoaWrapperForGalgas.h"
#import "C_sourceTextForCocoa.h"
#import "command_line_interface/C_CLI_OptionGroup.h"
#import "command_line_interface/C_builtin_CLI_Options.h"
#import "galgas/C_galgas_CLI_Options.h"
#import "goil_lexique.h"
#import "goil_options.h"
#ifdef USER_DEFAULT_COLORS_DEFINED
  #import "user_default_colors.h"
#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#pragma mark Boolean Command Line Options

//---------------------------------------------------------------------------*
//                                                                           *
//                       Boolean Command Line Options                        *
//                                                                           *
//---------------------------------------------------------------------------*

static const unsigned kBoolOptionCount = 12 ;

static const char gBoolOptionChar [kBoolOptionCount] = {
  '\0',
  '\0',
  '\0',
  '\0',
  'v',
  '\0',
  '\0',
  '\0',
  '\0',
  'a',
  'g',
  'i',
} ;

static const char * gBoolOptionString [kBoolOptionCount] = {
  "help",
  "version",
  "lexical-analysis-only",
  "parse-only",
  "verbose",
  "log-file-read",
  "no-file-generation",
  "Werror",
  "detailled-error-messages",
  "autosar",
  "generate-makefile",
  "interrupts",
} ;

static const char * gBoolOptionDescription [kBoolOptionCount] = {
  "Display help information",
  "Display version",
  "Perform only lexical analysis on input files",
  "Parse only input files",
  "Verbose Output",
  "Log every file read",
  "Do not generate any file",
  "Treat warnings as errors",
  "Print detailled error messages",
  "Parse Autosar objects and attributes",
  "Generate a Makefile from OS extra attributes",
  "Use the new interrupt scheme introduced for viper 2",
} ;

static bool gBoolOptionValue [kBoolOptionCount] ;

unsigned getBoolOptionsCount (void) {
  return kBoolOptionCount ;
}

bool getBoolOptionValue (const unsigned inIndex) {
  return gBoolOptionValue [inIndex] ;
}

void setBoolOptionValue (const unsigned inIndex, const bool inValue) {
  gBoolOptionValue [inIndex] = inValue ;
}

char getBoolOptionChar (const unsigned inIndex)  {
  return gBoolOptionChar [inIndex] ;
}

const char * getBoolOptionString (const unsigned inIndex) {
  return gBoolOptionString [inIndex] ;
}

const char * getBoolOptionDescription (const unsigned inIndex) {
  return gBoolOptionDescription [inIndex] ;
}

//---------------------------------------------------------------------------*

#pragma mark Unsigned Command Line Options

//---------------------------------------------------------------------------*
//                                                                           *
//                      Unsigned Command Line Options                        *
//                                                                           *
//---------------------------------------------------------------------------*

static const unsigned kUIntOptionCount = 2 ;

static const char gUIntOptionChar [kUIntOptionCount] = {
  '\0',
  '\0',
} ;

static const char * gUIntOptionString [kUIntOptionCount] = {
  "max-errors",
  "max-warnings",
} ;

static const char * gUIntOptionDescription [kUIntOptionCount] = {
  "Stop after the given number of errors has been reached (by default: 100)",
  "Stop after the given number of warnings has been reached (by default: 100)",
} ;

static unsigned gUintOptionValue [kUIntOptionCount] ;


unsigned getUIntOptionsCount (void) {
  return kUIntOptionCount ;
}

/* unsigned getUIntOptionDefaultValue (const unsigned inIndex) {
  return gUintOptionValue [inIndex] ;
} */

unsigned getUIntOptionValue (const unsigned inIndex) {
  return gUintOptionValue [inIndex] ;
}

void setUIntOptionValue (const unsigned inIndex, const unsigned inValue) {
  gUintOptionValue [inIndex] = inValue ;
}

char getUIntOptionChar (const unsigned inIndex)  {
  return gUIntOptionChar [inIndex] ;
}

const char * getUIntOptionString (const unsigned inIndex) {
  return gUIntOptionString [inIndex] ;
}

const char * getUIntOptionDescription (const unsigned inIndex) {
  return gUIntOptionDescription [inIndex] ;
}

//---------------------------------------------------------------------------*

#pragma mark String Command Line Options

//---------------------------------------------------------------------------*
//                                                                           *
//                       String Command Line Options                         *
//                                                                           *
//---------------------------------------------------------------------------*

static const unsigned kStringOptionCount = 3 ;

static const char gStringOptionChar [kStringOptionCount] = {
  'p',
  't',
  '\0',
} ;

static const char * gStringOptionString [kStringOptionCount] = {
  "project",
  "target",
  "templates",
} ;

static const char * gStringOptionDescription [kStringOptionCount] = {
  "Specifies project directory (by default, the project directory is the name of the oil file, without the .oil extension)",
  "Specifies target platform (avr, h8300h, libpcl, posix, posix_vp2, v850e, arm, c166, hcs12 or ppc)",
  "Specifies template directory (used by goil for code generation)",
} ;

static NSString * gStringOptionValue [kStringOptionCount] ;


unsigned getStringOptionsCount (void) {
  return kStringOptionCount ;
}

NSString * getStringOptionValue (const unsigned inIndex) {
  return gStringOptionValue [inIndex] ;
}

void setStringOptionValue (const unsigned inIndex, const NSString * inValue) {
  gStringOptionValue [inIndex] = inValue ;
}

char getStringOptionChar (const unsigned inIndex)  {
  return gStringOptionChar [inIndex] ;
}

const char * getStringOptionString (const unsigned inIndex) {
  return gStringOptionString [inIndex] ;
}

const char * getStringOptionDescription (const unsigned inIndex) {
  return gStringOptionDescription [inIndex] ;
}

//---------------------------------------------------------------------------*

#pragma mark ------------------------

//---------------------------------------------------------------------------*
//                                                                           *
//                         Global static variables                           *
//                                                                           *
//---------------------------------------------------------------------------*

static C_CLI_OptionGroup gCommandLineOptions ;
static C_galgas_io_parameters IOparameters (& gCommandLineOptions, false, "", "") ;
static C_galgas_io * gIOParametersPtr = NULL ;
static goil_lexique * gScannerPtr = NULL ;
static NSMutableArray * gColorArray ;

//---------------------------------------------------------------------------*

#pragma mark Text Macros

//---------------------------------------------------------------------------*
//                                                                           *
//                          T E X T    M A C R O S                           *
//                                                                           *
//---------------------------------------------------------------------------*

static uint32 kTextMacroCount = 0 ;

static const char * kTextMacroTitle [1] = {
  NULL
} ;

static const char * kTextMacroContent [1] = {
  NULL
} ;

uint32 getTextMacroCount (void) {
  return kTextMacroCount ;
}

const char * getTextMacroTitleAtIndex (const uint32 inIndex) {
  return kTextMacroTitle [inIndex] ;
}

const char * getTextMacroContentAtIndex (const uint32 inIndex) {
  return kTextMacroContent [inIndex] ;
}

//---------------------------------------------------------------------------*

#pragma mark Popup List Data

//---------------------------------------------------------------------------*
//                                                                           *
//                     P O P U P    L I S T    D A T A                       *
//                                                                           *
//---------------------------------------------------------------------------*

static const uint16 * kPopUpListData [265] = {
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL} ;

//---------------------------------------------------------------------------*

#pragma mark Nibs

//---------------------------------------------------------------------------*
//                                                                           *
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S            *
//                                                                           *
//---------------------------------------------------------------------------*

NSArray * nibsAndClasses (void) {
  return [NSArray arrayWithObjects:
    nil
  ] ;
}

//---------------------------------------------------------------------------*

#pragma mark Block Comment

//---------------------------------------------------------------------------*
//                                                                           *
//                        B L O C K    C O M M E N T                         *
//                                                                           *
//---------------------------------------------------------------------------*

NSString * blockComment (void) {
  return @"//" ;
}

//---------------------------------------------------------------------------*

#pragma mark Lexique interface

//---------------------------------------------------------------------------*
//                                                                           *
//                            Lexique interface                              *
//                                                                           *
//---------------------------------------------------------------------------*


sint32 getStylesCount (void) {
  return goil_lexique::getStylesCount () ;
}

//---------------------------------------------------------------------------*

const char * getStyleName (const sint32 inIndex) {
  return goil_lexique::getStyleName (inIndex) ;
}

//---------------------------------------------------------------------------*

const char * getStyleIdentifier (const sint32 inIndex) {
  return goil_lexique::getStyleIdentifier (inIndex) ;
}

//---------------------------------------------------------------------------*

void
scanThenGetStyledRangeArray (NSString * inSourceString,
                             const char * inSourceFileName,
                             TC_UniqueArray <C_styledRange> & ioStyledRangeArray,
                             const sint32 inAffectedRangeLocation,
                             const sint32 inAffectedRangeLength,
                             const sint32 inReplacementStringLength,
                             sint32 & outFirstIndexToRedraw,
                             sint32 & outLastIndexToRedraw,
                             sint32 & outEraseRangeStart,
                             sint32 & outEraseRangeEnd,
                             TC_UniqueArray <C_popupEntry> & outPopUpEntries) {
  if (gScannerPtr == NULL) {
    macroMyNew (gIOParametersPtr, C_galgas_io (IOparameters, C_galgas_io::kNoOutput COMMA_HERE)) ;
    macroMyNew (gScannerPtr, goil_lexique (NULL, "", "", gIOParametersPtr, "" COMMA_HERE)) ;
  }
  AC_sourceText * sourceTextPtr = NULL ;
  macroMyNew (sourceTextPtr,
              C_sourceTextForCocoa (inSourceString,
                                    inSourceFileName
                                    COMMA_HERE)) ;
  gScannerPtr->resetAndLoadSourceFromText (sourceTextPtr) ;
  gScannerPtr->scanThenGetStyledRangeArray (ioStyledRangeArray,
                                            inAffectedRangeLocation,
                                            inAffectedRangeLength,
                                            inReplacementStringLength,
                                            outFirstIndexToRedraw,
                                            outLastIndexToRedraw,
                                            outEraseRangeStart,
                                            outEraseRangeEnd,
                                            kPopUpListData,
                                            outPopUpEntries) ;
  macroDetachPointer (sourceTextPtr, C_sourceTextForCocoa) ;
}

//---------------------------------------------------------------------------*

void
initializeTextColors (NSString * inGGS_indexed_color,
                      NSString * inGGS_named_color) {
  NSUserDefaults * defaults = [NSUserDefaults standardUserDefaults] ;
  gColorArray = [NSMutableArray arrayWithCapacity:getStylesCount ()] ;
  [gColorArray retain] ;
  for (int i=0 ; i<getStylesCount () ; i++) {
    NSString * name = [NSString stringWithFormat:@"%@_%s", inGGS_named_color, getStyleIdentifier (i)] ;
    NSData * colorData = [defaults dataForKey:name] ;
    if (colorData == nil) {
      NSString * indexedName = [NSString stringWithFormat:@"%@_%d", inGGS_indexed_color, i] ;
      colorData = [defaults dataForKey:indexedName] ;
      [defaults setObject:colorData forKey:name] ;
      [defaults setObject:nil forKey:indexedName] ;
    }
    if (colorData != nil) {
      NSColor * color = (NSColor *) [NSUnarchiver unarchiveObjectWithData: colorData] ;
      [gColorArray addObject:color] ;
    }else{
      #ifdef USER_DEFAULT_COLORS_DEFINED
        NSColor * newColor = getDefaultUserColor (i) ;
      #else
        NSColor * newColor = [NSColor blackColor] ;
      #endif
        [gColorArray addObject:newColor] ;
        colorData = [NSArchiver archivedDataWithRootObject:newColor] ;
        [defaults setObject:colorData forKey:name] ;
    }
  }
}

//---------------------------------------------------------------------------*

NSColor * getColor (const sint32 inIndex) {
  return [gColorArray objectAtIndex: inIndex] ;
}

//---------------------------------------------------------------------------*

void changeColor (const sint32 inIndex, NSColor * inNewColor) {
  [gColorArray replaceObjectAtIndex: inIndex withObject: inNewColor] ;
}

//---------------------------------------------------------------------------*

