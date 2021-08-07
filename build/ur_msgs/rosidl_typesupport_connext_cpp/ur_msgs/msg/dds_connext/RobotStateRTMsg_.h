

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RobotStateRTMsg_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RobotStateRTMsg__2138618408_h
#define RobotStateRTMsg__2138618408_h

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

            extern const char *RobotStateRTMsg_TYPENAME;

            struct RobotStateRTMsg_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RobotStateRTMsg_TypeSupport;
            class RobotStateRTMsg_DataWriter;
            class RobotStateRTMsg_DataReader;
            #endif

            class RobotStateRTMsg_ 
            {
              public:
                typedef struct RobotStateRTMsg_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RobotStateRTMsg_TypeSupport TypeSupport;
                typedef RobotStateRTMsg_DataWriter DataWriter;
                typedef RobotStateRTMsg_DataReader DataReader;
                #endif

                DDS_Double   time_ ;
                DDS_DoubleSeq  q_target_ ;
                DDS_DoubleSeq  qd_target_ ;
                DDS_DoubleSeq  qdd_target_ ;
                DDS_DoubleSeq  i_target_ ;
                DDS_DoubleSeq  m_target_ ;
                DDS_DoubleSeq  q_actual_ ;
                DDS_DoubleSeq  qd_actual_ ;
                DDS_DoubleSeq  i_actual_ ;
                DDS_DoubleSeq  tool_acc_values_ ;
                DDS_DoubleSeq  tcp_force_ ;
                DDS_DoubleSeq  tool_vector_ ;
                DDS_DoubleSeq  tcp_speed_ ;
                DDS_Double   digital_input_bits_ ;
                DDS_DoubleSeq  motor_temperatures_ ;
                DDS_Double   controller_timer_ ;
                DDS_Double   test_value_ ;
                DDS_Double   robot_mode_ ;
                DDS_DoubleSeq  joint_modes_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RobotStateRTMsg__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RobotStateRTMsg_Seq, RobotStateRTMsg_);

            NDDSUSERDllExport
            RTIBool RobotStateRTMsg__initialize(
                RobotStateRTMsg_* self);

            NDDSUSERDllExport
            RTIBool RobotStateRTMsg__initialize_ex(
                RobotStateRTMsg_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RobotStateRTMsg__initialize_w_params(
                RobotStateRTMsg_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RobotStateRTMsg__finalize(
                RobotStateRTMsg_* self);

            NDDSUSERDllExport
            void RobotStateRTMsg__finalize_ex(
                RobotStateRTMsg_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RobotStateRTMsg__finalize_w_params(
                RobotStateRTMsg_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RobotStateRTMsg__finalize_optional_members(
                RobotStateRTMsg_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RobotStateRTMsg__copy(
                RobotStateRTMsg_* dst,
                const RobotStateRTMsg_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace ur_msgs  */

#endif /* RobotStateRTMsg_ */

