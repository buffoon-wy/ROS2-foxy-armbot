

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetSpeedSliderFraction_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetSpeedSliderFraction__1066741684_h
#define SetSpeedSliderFraction__1066741684_h

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

            extern const char *SetSpeedSliderFraction_Request_TYPENAME;

            struct SetSpeedSliderFraction_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetSpeedSliderFraction_Request_TypeSupport;
            class SetSpeedSliderFraction_Request_DataWriter;
            class SetSpeedSliderFraction_Request_DataReader;
            #endif

            class SetSpeedSliderFraction_Request_ 
            {
              public:
                typedef struct SetSpeedSliderFraction_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetSpeedSliderFraction_Request_TypeSupport TypeSupport;
                typedef SetSpeedSliderFraction_Request_DataWriter DataWriter;
                typedef SetSpeedSliderFraction_Request_DataReader DataReader;
                #endif

                DDS_Double   speed_slider_fraction_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetSpeedSliderFraction_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetSpeedSliderFraction_Request_Seq, SetSpeedSliderFraction_Request_);

            NDDSUSERDllExport
            RTIBool SetSpeedSliderFraction_Request__initialize(
                SetSpeedSliderFraction_Request_* self);

            NDDSUSERDllExport
            RTIBool SetSpeedSliderFraction_Request__initialize_ex(
                SetSpeedSliderFraction_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetSpeedSliderFraction_Request__initialize_w_params(
                SetSpeedSliderFraction_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetSpeedSliderFraction_Request__finalize(
                SetSpeedSliderFraction_Request_* self);

            NDDSUSERDllExport
            void SetSpeedSliderFraction_Request__finalize_ex(
                SetSpeedSliderFraction_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetSpeedSliderFraction_Request__finalize_w_params(
                SetSpeedSliderFraction_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetSpeedSliderFraction_Request__finalize_optional_members(
                SetSpeedSliderFraction_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetSpeedSliderFraction_Request__copy(
                SetSpeedSliderFraction_Request_* dst,
                const SetSpeedSliderFraction_Request_* src);

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

            extern const char *SetSpeedSliderFraction_Response_TYPENAME;

            struct SetSpeedSliderFraction_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetSpeedSliderFraction_Response_TypeSupport;
            class SetSpeedSliderFraction_Response_DataWriter;
            class SetSpeedSliderFraction_Response_DataReader;
            #endif

            class SetSpeedSliderFraction_Response_ 
            {
              public:
                typedef struct SetSpeedSliderFraction_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetSpeedSliderFraction_Response_TypeSupport TypeSupport;
                typedef SetSpeedSliderFraction_Response_DataWriter DataWriter;
                typedef SetSpeedSliderFraction_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetSpeedSliderFraction_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetSpeedSliderFraction_Response_Seq, SetSpeedSliderFraction_Response_);

            NDDSUSERDllExport
            RTIBool SetSpeedSliderFraction_Response__initialize(
                SetSpeedSliderFraction_Response_* self);

            NDDSUSERDllExport
            RTIBool SetSpeedSliderFraction_Response__initialize_ex(
                SetSpeedSliderFraction_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetSpeedSliderFraction_Response__initialize_w_params(
                SetSpeedSliderFraction_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetSpeedSliderFraction_Response__finalize(
                SetSpeedSliderFraction_Response_* self);

            NDDSUSERDllExport
            void SetSpeedSliderFraction_Response__finalize_ex(
                SetSpeedSliderFraction_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetSpeedSliderFraction_Response__finalize_w_params(
                SetSpeedSliderFraction_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetSpeedSliderFraction_Response__finalize_optional_members(
                SetSpeedSliderFraction_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetSpeedSliderFraction_Response__copy(
                SetSpeedSliderFraction_Response_* dst,
                const SetSpeedSliderFraction_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ur_msgs  */

#endif /* SetSpeedSliderFraction_ */

