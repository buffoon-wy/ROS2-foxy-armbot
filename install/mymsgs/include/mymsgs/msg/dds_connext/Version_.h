

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Version_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Version__59750613_h
#define Version__59750613_h

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

            extern const char *Version_TYPENAME;

            struct Version_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Version_TypeSupport;
            class Version_DataWriter;
            class Version_DataReader;
            #endif

            class Version_ 
            {
              public:
                typedef struct Version_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Version_TypeSupport TypeSupport;
                typedef Version_DataWriter DataWriter;
                typedef Version_DataReader DataReader;
                #endif

                DDS_UnsignedLong   hardware_ver_ ;
                DDS_UnsignedLong   software_ver_ ;
                DDS_UnsignedLong   uiud_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Version__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Version_Seq, Version_);

            NDDSUSERDllExport
            RTIBool Version__initialize(
                Version_* self);

            NDDSUSERDllExport
            RTIBool Version__initialize_ex(
                Version_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Version__initialize_w_params(
                Version_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Version__finalize(
                Version_* self);

            NDDSUSERDllExport
            void Version__finalize_ex(
                Version_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Version__finalize_w_params(
                Version_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Version__finalize_optional_members(
                Version_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Version__copy(
                Version_* dst,
                const Version_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsgs  */

#endif /* Version_ */

