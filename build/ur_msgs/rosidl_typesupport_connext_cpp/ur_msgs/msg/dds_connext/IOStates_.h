

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IOStates_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef IOStates__1123445255_h
#define IOStates__1123445255_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "ur_msgs/msg/dds_connext/Analog_.h"
#include "ur_msgs/msg/dds_connext/Digital_.h"
namespace ur_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *IOStates_TYPENAME;

            struct IOStates_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class IOStates_TypeSupport;
            class IOStates_DataWriter;
            class IOStates_DataReader;
            #endif

            class IOStates_ 
            {
              public:
                typedef struct IOStates_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef IOStates_TypeSupport TypeSupport;
                typedef IOStates_DataWriter DataWriter;
                typedef IOStates_DataReader DataReader;
                #endif

                ur_msgs::msg::dds_::Digital_Seq  digital_in_states_ ;
                ur_msgs::msg::dds_::Digital_Seq  digital_out_states_ ;
                ur_msgs::msg::dds_::Digital_Seq  flag_states_ ;
                ur_msgs::msg::dds_::Analog_Seq  analog_in_states_ ;
                ur_msgs::msg::dds_::Analog_Seq  analog_out_states_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* IOStates__get_typecode(void); /* Type code */

            DDS_SEQUENCE(IOStates_Seq, IOStates_);

            NDDSUSERDllExport
            RTIBool IOStates__initialize(
                IOStates_* self);

            NDDSUSERDllExport
            RTIBool IOStates__initialize_ex(
                IOStates_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool IOStates__initialize_w_params(
                IOStates_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void IOStates__finalize(
                IOStates_* self);

            NDDSUSERDllExport
            void IOStates__finalize_ex(
                IOStates_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void IOStates__finalize_w_params(
                IOStates_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void IOStates__finalize_optional_members(
                IOStates_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool IOStates__copy(
                IOStates_* dst,
                const IOStates_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace ur_msgs  */

#endif /* IOStates_ */

