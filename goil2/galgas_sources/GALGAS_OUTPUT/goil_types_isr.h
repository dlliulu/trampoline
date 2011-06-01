//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'goil_types_isr.h'                           *
//                       Generated by version 1.9.10                         *
//                      march 18th, 2010, at 9h48'59"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_types_isr_DEFINED
#define goil_types_isr_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "goil_basic_types.h"
#include "goil_types_timing_prot.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_isr_obj ;
class cPtr_isr_obj ;
class GGS_isr_map ;
class GGS_isr_list ;

//---------------------------------------------------------------------------*
//                                                                           *
//                        GALGAS class 'GGS_isr_obj'                         *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_isr_obj ;

//---------------------------------------------------------------------------*

class GGS_isr_obj : public GGS_oil_obj {
//--- Default constructor
  public : inline GGS_isr_obj (void) :
  GGS_oil_obj () {}

//--- Pointer assignment constructor
  public : GGS_isr_obj (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_isr_obj (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_isr_obj
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_isr_obj constructor_new (C_Compiler & inLexique,
                                const GGS_lstring & argument_0,
                                const GGS_basic_type & argument_1,
                                const GGS_basic_type & argument_2,
                                const GGS_lstringlist & argument_3,
                                const GGS_lstringlist & argument_4,
                                const GGS_lstringlist & argument_5,
                                const GGS_timing_prot & argument_6,
                                const GGS_ident_map & argument_7
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_isr_obj * getPtr (void) const {
    return (cPtr_isr_obj *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_basic_type  reader_category (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_basic_type  reader_priority (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstringlist  reader_resources (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstringlist  reader_messages (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstringlist  reader_acc_apps (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_timing_prot  reader_timing_prot (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_ident_map  reader_other_fields (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_isr_obj * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_isr_obj * operator () (LOCATION_ARGS) const {
      return (cPtr_isr_obj *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_isr_obj castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__isr_obj ;

//---------------------------------------------------------------------------*
//                                                                           *
//                              Map '@isr_map'                               *
//                                                                           *
//---------------------------------------------------------------------------*

class elementOf_GGS_isr_map ;

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_isr_map ;

//---------------------------------------------------------------------------*

class GGS_isr_map : public AC_galgas_map {
//--- Element Class
  public : typedef elementOf_GGS_isr_map cElement ;

//--- Get pointers
  public : inline cElement * firstObject (void) const { return (cElement *) internalFirstObject () ; }
  public : inline cElement * lastObject (void) const { return (cElement *) internalLastObject () ; }

//--- Comparison methods
  public : GGS_bool operator_isEqual (const GGS_isr_map & inOperand) const ;
  public : GGS_bool operator_isNotEqual (const GGS_isr_map & inOperand) const ;

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_isr_map castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

//--- Create an element
  protected : virtual AC_galgas_map_element *
  new_element (const GGS_lstring & inKey, void * inInfo) ;

//--- Assign information to an existing element
  protected : virtual void
  assignInfo (AC_galgas_map_element * inPtr, void * inInfo) ;

//--- Enter an index
  public : void enterIndex (const GGS_lstring & inKey,
                            AC_galgas_index_core & outIndex) ;

//--- Get object pointer (for method call)
  public : inline GGS_isr_map * operator () (UNUSED_LOCATION_ARGS) { return this ; }
  public : inline const GGS_isr_map * operator () (UNUSED_LOCATION_ARGS) const { return this ; }

//--- 'emptyMap' constructor
  public : static GGS_isr_map constructor_emptyMap (C_Compiler & inLexique COMMA_LOCATION_ARGS) ;

//--- Method used for duplicate a map
  protected : virtual void internalInsertForDuplication (AC_galgas_map_element * inPtr) ;

//--- Modifiers "set'Value'ForKey"

  public : static const utf32 kRemoveMessage_del [] ;

//--- 'del' Remove Modifier
  public : void modifier_del (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                GGS_isr_obj & outParameter0 COMMA_LOCATION_ARGS) ;

  public : static const utf32 kInsertMessage_put [] ;

//--- 'put' Insert Modifier
  public : void modifier_put (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                const GGS_isr_obj &  inParameter0 COMMA_LOCATION_ARGS) ;

  public : static const utf32 kSearchMessage_get [] ;

//--- 'get' Search Method
  public : void method_get (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                GGS_isr_obj   & outParameter0 COMMA_LOCATION_ARGS) const ;
//--- Internal method for removing an element
  protected : void removeElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   GGS_isr_obj & outParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) ;
//--- Internal method for inserting an element
  protected : void insertElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   const GGS_isr_obj & inParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) ;
//--- Internal method for searching for an element
  protected : void searchElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   GGS_isr_obj & outParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) const ;
  public : virtual GGS_string reader_description (const PMSInt32 inIndentation = 0) const ;
  public : static GGS_isr_map constructor_mapWithMapToOverride (C_Compiler & inLexique,
                                            const GGS_isr_map & inMapToOverride
                                            COMMA_LOCATION_ARGS) ;
  public : GGS_isr_map reader_overriddenMap (C_Compiler & inLexique
                                            COMMA_LOCATION_ARGS) const ;
//--------------------------------- Map Enumerator
  public : class cEnumerator : public cAbstractMapEnumerator {
  //--- Constructors
    public : inline cEnumerator (const GGS_isr_map & inMap,
                                 const bool inAscending) :
    cAbstractMapEnumerator (inMap, inAscending) {
    }
    public : inline cEnumerator (const GGS_isr_map & inMap) :
    cAbstractMapEnumerator (inMap) {
    }
  //--- Iterator method
    public : inline cElement * nextObject (void) {
      return (cElement *) internalNextObject () ;
    }
    public : /* const */ GGS_isr_obj   & _isr (LOCATION_ARGS) const ;
  } ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                         sorted list '@isr_list'                           *
//                                                                           *
//---------------------------------------------------------------------------*

class elementOf_GGS_isr_list ;
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_isr_list ;

//---------------------------------------------------------------------------*


class GGS_isr_list : public AC_galgas_sortedlist {
  public : typedef elementOf_GGS_isr_list cElement ;
//--- Default Constructor
  public : GGS_isr_list (void) ;
//--- Copy Constructor
  public : GGS_isr_list (const GGS_isr_list & inSource) ;
//--- Comparison Operators
  public : GGS_bool operator_isEqual (const GGS_isr_list & inOperand) const ;
  public : GGS_bool operator_isNotEqual (const GGS_isr_list & inOperand) const ;
//--- Constructor 'emptySortedList'
  public : static GGS_isr_list constructor_emptySortedList (void) ;
  public : static GGS_isr_list constructor_sortedListWithValue (const GGS_lstring & argument_0,
                           const GGS_string& argument_1) ;
//--- Get smallest object
  public : inline cElement * firstObject (void) const {
    return (cElement *) internalSmallestObject () ;
  }
//--- Get greatest object
  public : inline cElement * lastObject (void) const {
    return (cElement *) internalGreatestObject () ;
  }
//--- Operators () used for method call
  public : const GGS_isr_list * operator () (UNUSED_LOCATION_ARGS) const { return this ;} 
//--- Method 'smallest'
  public : void method_smallest (C_Compiler & inLexique,
                              GGS_lstring & _out_0,
                              GGS_string& _out_1
                              COMMA_LOCATION_ARGS) const ;
//--- Method 'greatest'
  public : void method_greatest (C_Compiler & inLexique,
                             GGS_lstring & _out_0,
                             GGS_string& _out_1
                             COMMA_LOCATION_ARGS) const ;
//--- Method 'popGreatest'
  public : void modifier_popGreatest (C_Compiler & inLexique,
                                GGS_lstring & _out_0,
                                GGS_string& _out_1
                                COMMA_LOCATION_ARGS) ;
//--- Modifier 'popSmallest'
  public : void modifier_popSmallest (C_Compiler & inLexique,
                                 GGS_lstring & _out_0,
                                 GGS_string& _out_1
                                 COMMA_LOCATION_ARGS) ;
//--- Handle '.=' operator
  public : void dotAssign_operation (const GGS_isr_list inOperand) ;

//--- Handling '+=' GALGAS operator
  public : void addAssign_operation (const GGS_lstring & argument_0,
                                const GGS_string& argument_1) ;
//--- Handling '.' GALGAS operator
  public : GGS_isr_list operator_concat (const GGS_isr_list & inOperand) const ;

//--- Internal Methods
  protected : void internalAppendValues (const GGS_lstring & argument_0,
                                const GGS_string& argument_1) ;
//--- List Insulation
  protected : void insulateList (void) ;
//--- Reader 'description
  public : virtual GGS_string reader_description (const PMSInt32 inIndentation = 0) const ;
//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_isr_list castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Sorted List Enumerator
  public : class cEnumerator : public cAbstractSortedListEnumerator {
  //--- Constructor
    public : inline cEnumerator (const GGS_isr_list & inList,
                                 const bool inAscending) :
    cAbstractSortedListEnumerator (inList, inAscending) {
    }
  //--- Iterator method
    public : inline cElement * nextObject (void) {
      return (cElement *) internalNextObject () ;
    }
    public : /* const */ GGS_lstring  & _key (LOCATION_ARGS) const ;
    public : /* const */ GGS_string & _sort (LOCATION_ARGS) const ;
  } ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      abstract class 'cPtr_isr_obj'                        *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_isr_obj : public cPtr_oil_obj {
  private : typedef cPtr_oil_obj inherited ;
//--- Constructor
  public : cPtr_isr_obj (const GGS_lstring & ,
                                const GGS_basic_type & ,
                                const GGS_basic_type & ,
                                const GGS_lstringlist & ,
                                const GGS_lstringlist & ,
                                const GGS_lstringlist & ,
                                const GGS_timing_prot & ,
                                const GGS_ident_map & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_basic_type  category ;
  public : GGS_basic_type  priority ;
  public : GGS_lstringlist  resources ;
  public : GGS_lstringlist  messages ;
  public : GGS_lstringlist  acc_apps ;
  public : GGS_timing_prot  timing_prot ;
  public : GGS_ident_map  other_fields ;
//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                        Element of map '@isr_map'                          *
//                                                                           *
//---------------------------------------------------------------------------*

class e_isr_map {
  public : GGS_isr_obj  isr ;

  public : e_isr_map (void) ;
} ;

//---------------------------------------------------------------------------*

class elementOf_GGS_isr_map : public AC_galgas_map_element {
//--- Constructor
  public : elementOf_GGS_isr_map (const GGS_lstring & inKey,
                                     const PMSInt32 inIndex,
                                     const e_isr_map & inInfo) ;
//--- Get pointers
  public : inline elementOf_GGS_isr_map * nextObject (void) const { return (elementOf_GGS_isr_map *) mNextItem ; }
  public : inline elementOf_GGS_isr_map * infObject (void) const { return (elementOf_GGS_isr_map *) mInfPtr ; }
  public : inline elementOf_GGS_isr_map * supObject (void) const { return (elementOf_GGS_isr_map *) mSupPtr ; }
//--- Comparison
  protected : virtual bool isEqualToMapElement (const AC_galgas_map_element * inOperand) const ;
//--- Data member
  public : e_isr_map mInfo ;
//--- Method for 'description' reader
  public : void appendForMapDescription (const PMSInt32 inElementIndex,
                                         C_String & ioString,
                                         const PMSInt32 inIndentation) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    Element of sorted list '@isr_list'                     *
//                                                                           *
//---------------------------------------------------------------------------*

class elementOf_GGS_isr_list : public AC_galgas_sortedlist::cSortedListElement {
//--- Attributes
  public : GGS_lstring  key ;
  public : GGS_string sort ;
//--- Constructor
  public : elementOf_GGS_isr_list (const GGS_lstring & ,
                                const GGS_string& ) ;

//--- Access to next
  public : inline elementOf_GGS_isr_list * nextObject (void) const { return (elementOf_GGS_isr_list *) internalNextItem () ; }
//--- Access to previous
  public : inline elementOf_GGS_isr_list * previousObject (void) const { return (elementOf_GGS_isr_list *) internalPreviousItem () ; }
//--- Element comparison
  protected : virtual bool
  isEqualToObject (const cSortedListElement * inOperand) const ;
//--- Method used for sorting elements
  protected : virtual PMSInt32 compareForSorting (const cSortedListElement * inOperand) const ;
//--- Method used for description
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;
  friend class GGS_isr_list ;
} ;

//---------------------------------------------------------------------------*

#endif
