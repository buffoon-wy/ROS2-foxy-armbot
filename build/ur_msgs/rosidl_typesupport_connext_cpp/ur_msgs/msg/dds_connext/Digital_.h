

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Digital_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Digital__293384040_h
#define Digital__293384040_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace ur_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Digital_TYPENAME;

            struct Digital_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Digital_TypeSupport;
            class Digital_DataWriter;
            class Digital_DataReader;
            #endif

            class Digital_ 
            {
              public:
                typedef struct Digital_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Digital_TypeSupport TypeSupport;
                typedef Digital_DataWriter DataWriter;
                typedef Digital_DataReader DataReader;
                #endif

                DDS_Octet   pin_ ;
                DDS_Boolean   state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Digital__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Digital_Seq, Digital_);

            NDDSUSERDllExport
            RTIBool Digital__initialize(
                Digital_* self);

            NDDSUSERDllExport
            RTIBool Digital__initialize_ex(
                Digital_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Digital__initialize_w_params(
                Digital_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Digital__finalize(
                Digital_* self);

            NDDSUSERDllExport
            void Digital__finalize_ex(
                Digital_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Digital__finalize_w_params(
                Digital_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Digital__finalize_optional_members(
                Digital_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Digital__copy(
                Digital_* dst,
                const Digital_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace ur_msgs  */

#endif /* Digital_ */

