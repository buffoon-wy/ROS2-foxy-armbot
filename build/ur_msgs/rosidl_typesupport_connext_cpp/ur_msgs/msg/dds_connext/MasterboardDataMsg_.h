

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MasterboardDataMsg_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MasterboardDataMsg__477478606_h
#define MasterboardDataMsg__477478606_h

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

            extern const char *MasterboardDataMsg_TYPENAME;

            struct MasterboardDataMsg_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MasterboardDataMsg_TypeSupport;
            class MasterboardDataMsg_DataWriter;
            class MasterboardDataMsg_DataReader;
            #endif

            class MasterboardDataMsg_ 
            {
              public:
                typedef struct MasterboardDataMsg_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MasterboardDataMsg_TypeSupport TypeSupport;
                typedef MasterboardDataMsg_DataWriter DataWriter;
                typedef MasterboardDataMsg_DataReader DataReader;
                #endif

                DDS_UnsignedLong   digital_input_bits_ ;
                DDS_UnsignedLong   digital_output_bits_ ;
                DDS_Octet   analog_input_range0_ ;
                DDS_Octet   analog_input_range1_ ;
                DDS_Double   analog_input0_ ;
                DDS_Double   analog_input1_ ;
                DDS_Octet   analog_output_domain0_ ;
                DDS_Octet   analog_output_domain1_ ;
                DDS_Double   analog_output0_ ;
                DDS_Double   analog_output1_ ;
                DDS_Float   masterboard_temperature_ ;
                DDS_Float   robot_current_ ;
                DDS_Float   master_io_current_ ;
                DDS_Octet   master_safety_state_ ;
                DDS_Octet   master_onoff_state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MasterboardDataMsg__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MasterboardDataMsg_Seq, MasterboardDataMsg_);

            NDDSUSERDllExport
            RTIBool MasterboardDataMsg__initialize(
                MasterboardDataMsg_* self);

            NDDSUSERDllExport
            RTIBool MasterboardDataMsg__initialize_ex(
                MasterboardDataMsg_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MasterboardDataMsg__initialize_w_params(
                MasterboardDataMsg_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MasterboardDataMsg__finalize(
                MasterboardDataMsg_* self);

            NDDSUSERDllExport
            void MasterboardDataMsg__finalize_ex(
                MasterboardDataMsg_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MasterboardDataMsg__finalize_w_params(
                MasterboardDataMsg_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MasterboardDataMsg__finalize_optional_members(
                MasterboardDataMsg_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MasterboardDataMsg__copy(
                MasterboardDataMsg_* dst,
                const MasterboardDataMsg_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace ur_msgs  */

#endif /* MasterboardDataMsg_ */

