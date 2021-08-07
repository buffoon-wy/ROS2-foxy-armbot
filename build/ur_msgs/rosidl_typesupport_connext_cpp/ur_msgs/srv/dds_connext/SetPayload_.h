

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetPayload_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetPayload__308780456_h
#define SetPayload__308780456_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Vector3_.h"
namespace ur_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetPayload_Request_TYPENAME;

            struct SetPayload_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetPayload_Request_TypeSupport;
            class SetPayload_Request_DataWriter;
            class SetPayload_Request_DataReader;
            #endif

            class SetPayload_Request_ 
            {
              public:
                typedef struct SetPayload_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetPayload_Request_TypeSupport TypeSupport;
                typedef SetPayload_Request_DataWriter DataWriter;
                typedef SetPayload_Request_DataReader DataReader;
                #endif

                DDS_Float   payload_ ;
                geometry_msgs::msg::dds_::Vector3_   center_of_gravity_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetPayload_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetPayload_Request_Seq, SetPayload_Request_);

            NDDSUSERDllExport
            RTIBool SetPayload_Request__initialize(
                SetPayload_Request_* self);

            NDDSUSERDllExport
            RTIBool SetPayload_Request__initialize_ex(
                SetPayload_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetPayload_Request__initialize_w_params(
                SetPayload_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetPayload_Request__finalize(
                SetPayload_Request_* self);

            NDDSUSERDllExport
            void SetPayload_Request__finalize_ex(
                SetPayload_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetPayload_Request__finalize_w_params(
                SetPayload_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetPayload_Request__finalize_optional_members(
                SetPayload_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetPayload_Request__copy(
                SetPayload_Request_* dst,
                const SetPayload_Request_* src);

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

            extern const char *SetPayload_Response_TYPENAME;

            struct SetPayload_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetPayload_Response_TypeSupport;
            class SetPayload_Response_DataWriter;
            class SetPayload_Response_DataReader;
            #endif

            class SetPayload_Response_ 
            {
              public:
                typedef struct SetPayload_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetPayload_Response_TypeSupport TypeSupport;
                typedef SetPayload_Response_DataWriter DataWriter;
                typedef SetPayload_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetPayload_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetPayload_Response_Seq, SetPayload_Response_);

            NDDSUSERDllExport
            RTIBool SetPayload_Response__initialize(
                SetPayload_Response_* self);

            NDDSUSERDllExport
            RTIBool SetPayload_Response__initialize_ex(
                SetPayload_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetPayload_Response__initialize_w_params(
                SetPayload_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetPayload_Response__finalize(
                SetPayload_Response_* self);

            NDDSUSERDllExport
            void SetPayload_Response__finalize_ex(
                SetPayload_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetPayload_Response__finalize_w_params(
                SetPayload_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetPayload_Response__finalize_optional_members(
                SetPayload_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetPayload_Response__copy(
                SetPayload_Response_* dst,
                const SetPayload_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ur_msgs  */

#endif /* SetPayload_ */

