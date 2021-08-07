

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetIO_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetIO__1721682060_h
#define SetIO__1721682060_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace ur_msgs {
    namespace srv {
        namespace dds_ {
            namespace SetIO_Request_Constants {
                static const DDS_Octet FUN_SET_DIGITAL_OUT_= 1;
                static const DDS_Octet FUN_SET_FLAG_= 2;
                static const DDS_Octet FUN_SET_ANALOG_OUT_= 3;
                static const DDS_Octet FUN_SET_TOOL_VOLTAGE_= 4;
                static const DDS_Octet STATE_OFF_= 0;
                static const DDS_Octet STATE_ON_= 1;
                static const DDS_Octet STATE_TOOL_VOLTAGE_0V_= 0;
                static const DDS_Octet STATE_TOOL_VOLTAGE_12V_= 12;
                static const DDS_Octet STATE_TOOL_VOLTAGE_24V_= 24;
            } /* namespace SetIO_Request_Constants  */

            extern const char *SetIO_Request_TYPENAME;

            struct SetIO_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetIO_Request_TypeSupport;
            class SetIO_Request_DataWriter;
            class SetIO_Request_DataReader;
            #endif

            class SetIO_Request_ 
            {
              public:
                typedef struct SetIO_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetIO_Request_TypeSupport TypeSupport;
                typedef SetIO_Request_DataWriter DataWriter;
                typedef SetIO_Request_DataReader DataReader;
                #endif

                DDS_Octet   fun_ ;
                DDS_Octet   pin_ ;
                DDS_Float   state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetIO_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetIO_Request_Seq, SetIO_Request_);

            NDDSUSERDllExport
            RTIBool SetIO_Request__initialize(
                SetIO_Request_* self);

            NDDSUSERDllExport
            RTIBool SetIO_Request__initialize_ex(
                SetIO_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetIO_Request__initialize_w_params(
                SetIO_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetIO_Request__finalize(
                SetIO_Request_* self);

            NDDSUSERDllExport
            void SetIO_Request__finalize_ex(
                SetIO_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetIO_Request__finalize_w_params(
                SetIO_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetIO_Request__finalize_optional_members(
                SetIO_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetIO_Request__copy(
                SetIO_Request_* dst,
                const SetIO_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ur_msgs  */
namespace ur_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetIO_Response_TYPENAME;

            struct SetIO_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetIO_Response_TypeSupport;
            class SetIO_Response_DataWriter;
            class SetIO_Response_DataReader;
            #endif

            class SetIO_Response_ 
            {
              public:
                typedef struct SetIO_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetIO_Response_TypeSupport TypeSupport;
                typedef SetIO_Response_DataWriter DataWriter;
                typedef SetIO_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetIO_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetIO_Response_Seq, SetIO_Response_);

            NDDSUSERDllExport
            RTIBool SetIO_Response__initialize(
                SetIO_Response_* self);

            NDDSUSERDllExport
            RTIBool SetIO_Response__initialize_ex(
                SetIO_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetIO_Response__initialize_w_params(
                SetIO_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetIO_Response__finalize(
                SetIO_Response_* self);

            NDDSUSERDllExport
            void SetIO_Response__finalize_ex(
                SetIO_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetIO_Response__finalize_w_params(
                SetIO_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetIO_Response__finalize_optional_members(
                SetIO_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetIO_Response__copy(
                SetIO_Response_* dst,
                const SetIO_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ur_msgs  */

#endif /* SetIO_ */

