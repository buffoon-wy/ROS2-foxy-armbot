

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Heart_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Heart__373072294_h
#define Heart__373072294_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mymsgs {
    namespace msg {
        namespace dds_ {

            extern const char *Heart_TYPENAME;

            struct Heart_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Heart_TypeSupport;
            class Heart_DataWriter;
            class Heart_DataReader;
            #endif

            class Heart_ 
            {
              public:
                typedef struct Heart_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Heart_TypeSupport TypeSupport;
                typedef Heart_DataWriter DataWriter;
                typedef Heart_DataReader DataReader;
                #endif

                DDS_UnsignedLong   error_code_ ;
                DDS_Octet   type_ ;
                DDS_Octet   base_mode_ ;
                DDS_Octet   system_status_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Heart__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Heart_Seq, Heart_);

            NDDSUSERDllExport
            RTIBool Heart__initialize(
                Heart_* self);

            NDDSUSERDllExport
            RTIBool Heart__initialize_ex(
                Heart_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Heart__initialize_w_params(
                Heart_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Heart__finalize(
                Heart_* self);

            NDDSUSERDllExport
            void Heart__finalize_ex(
                Heart_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Heart__finalize_w_params(
                Heart_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Heart__finalize_optional_members(
                Heart_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Heart__copy(
                Heart_* dst,
                const Heart_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsgs  */

#endif /* Heart_ */

