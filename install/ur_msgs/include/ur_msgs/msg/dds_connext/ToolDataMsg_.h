

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ToolDataMsg_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ToolDataMsg__1799782922_h
#define ToolDataMsg__1799782922_h

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
            namespace ToolDataMsg_Constants {
                static const DDS_Octet ANALOG_INPUT_RANGE_CURRENT_= 0;
                static const DDS_Octet ANALOG_INPUT_RANGE_VOLTAGE_= 1;
                static const DDS_Octet TOOL_BOOTLOADER_MODE_= 249;
                static const DDS_Octet TOOL_RUNNING_MODE_= 253;
                static const DDS_Octet TOOL_IDLE_MODE_= 255;
            } /* namespace ToolDataMsg_Constants  */

            extern const char *ToolDataMsg_TYPENAME;

            struct ToolDataMsg_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ToolDataMsg_TypeSupport;
            class ToolDataMsg_DataWriter;
            class ToolDataMsg_DataReader;
            #endif

            class ToolDataMsg_ 
            {
              public:
                typedef struct ToolDataMsg_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ToolDataMsg_TypeSupport TypeSupport;
                typedef ToolDataMsg_DataWriter DataWriter;
                typedef ToolDataMsg_DataReader DataReader;
                #endif

                DDS_Octet   analog_input_range2_ ;
                DDS_Octet   analog_input_range3_ ;
                DDS_Double   analog_input2_ ;
                DDS_Double   analog_input3_ ;
                DDS_Octet   tool_output_voltage_ ;
                DDS_Float   tool_current_ ;
                DDS_Float   tool_temperature_ ;
                DDS_Octet   tool_mode_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ToolDataMsg__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ToolDataMsg_Seq, ToolDataMsg_);

            NDDSUSERDllExport
            RTIBool ToolDataMsg__initialize(
                ToolDataMsg_* self);

            NDDSUSERDllExport
            RTIBool ToolDataMsg__initialize_ex(
                ToolDataMsg_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ToolDataMsg__initialize_w_params(
                ToolDataMsg_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ToolDataMsg__finalize(
                ToolDataMsg_* self);

            NDDSUSERDllExport
            void ToolDataMsg__finalize_ex(
                ToolDataMsg_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ToolDataMsg__finalize_w_params(
                ToolDataMsg_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ToolDataMsg__finalize_optional_members(
                ToolDataMsg_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ToolDataMsg__copy(
                ToolDataMsg_* dst,
                const ToolDataMsg_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace ur_msgs  */

#endif /* ToolDataMsg_ */

