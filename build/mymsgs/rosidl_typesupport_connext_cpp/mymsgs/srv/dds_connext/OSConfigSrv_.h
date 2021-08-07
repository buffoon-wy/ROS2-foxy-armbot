

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OSConfigSrv_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef OSConfigSrv__866920733_h
#define OSConfigSrv__866920733_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mymsgs {
    namespace srv {
        namespace dds_ {

            extern const char *OSConfigSrv_Request_TYPENAME;

            struct OSConfigSrv_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class OSConfigSrv_Request_TypeSupport;
            class OSConfigSrv_Request_DataWriter;
            class OSConfigSrv_Request_DataReader;
            #endif

            class OSConfigSrv_Request_ 
            {
              public:
                typedef struct OSConfigSrv_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef OSConfigSrv_Request_TypeSupport TypeSupport;
                typedef OSConfigSrv_Request_DataWriter DataWriter;
                typedef OSConfigSrv_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* OSConfigSrv_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(OSConfigSrv_Request_Seq, OSConfigSrv_Request_);

            NDDSUSERDllExport
            RTIBool OSConfigSrv_Request__initialize(
                OSConfigSrv_Request_* self);

            NDDSUSERDllExport
            RTIBool OSConfigSrv_Request__initialize_ex(
                OSConfigSrv_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool OSConfigSrv_Request__initialize_w_params(
                OSConfigSrv_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void OSConfigSrv_Request__finalize(
                OSConfigSrv_Request_* self);

            NDDSUSERDllExport
            void OSConfigSrv_Request__finalize_ex(
                OSConfigSrv_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void OSConfigSrv_Request__finalize_w_params(
                OSConfigSrv_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void OSConfigSrv_Request__finalize_optional_members(
                OSConfigSrv_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool OSConfigSrv_Request__copy(
                OSConfigSrv_Request_* dst,
                const OSConfigSrv_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mymsgs  */
namespace mymsgs {
    namespace srv {
        namespace dds_ {

            extern const char *OSConfigSrv_Response_TYPENAME;

            struct OSConfigSrv_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class OSConfigSrv_Response_TypeSupport;
            class OSConfigSrv_Response_DataWriter;
            class OSConfigSrv_Response_DataReader;
            #endif

            class OSConfigSrv_Response_ 
            {
              public:
                typedef struct OSConfigSrv_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef OSConfigSrv_Response_TypeSupport TypeSupport;
                typedef OSConfigSrv_Response_DataWriter DataWriter;
                typedef OSConfigSrv_Response_DataReader DataReader;
                #endif

                DDS_Char *   metadata_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* OSConfigSrv_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(OSConfigSrv_Response_Seq, OSConfigSrv_Response_);

            NDDSUSERDllExport
            RTIBool OSConfigSrv_Response__initialize(
                OSConfigSrv_Response_* self);

            NDDSUSERDllExport
            RTIBool OSConfigSrv_Response__initialize_ex(
                OSConfigSrv_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool OSConfigSrv_Response__initialize_w_params(
                OSConfigSrv_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void OSConfigSrv_Response__finalize(
                OSConfigSrv_Response_* self);

            NDDSUSERDllExport
            void OSConfigSrv_Response__finalize_ex(
                OSConfigSrv_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void OSConfigSrv_Response__finalize_w_params(
                OSConfigSrv_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void OSConfigSrv_Response__finalize_optional_members(
                OSConfigSrv_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool OSConfigSrv_Response__copy(
                OSConfigSrv_Response_* dst,
                const OSConfigSrv_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mymsgs  */

#endif /* OSConfigSrv_ */

