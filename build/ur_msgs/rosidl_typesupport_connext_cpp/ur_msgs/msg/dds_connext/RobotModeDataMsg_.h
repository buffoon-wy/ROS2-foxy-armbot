

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RobotModeDataMsg_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RobotModeDataMsg__725434880_h
#define RobotModeDataMsg__725434880_h

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

            extern const char *RobotModeDataMsg_TYPENAME;

            struct RobotModeDataMsg_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RobotModeDataMsg_TypeSupport;
            class RobotModeDataMsg_DataWriter;
            class RobotModeDataMsg_DataReader;
            #endif

            class RobotModeDataMsg_ 
            {
              public:
                typedef struct RobotModeDataMsg_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RobotModeDataMsg_TypeSupport TypeSupport;
                typedef RobotModeDataMsg_DataWriter DataWriter;
                typedef RobotModeDataMsg_DataReader DataReader;
                #endif

                DDS_UnsignedLongLong   timestamp_ ;
                DDS_Boolean   is_robot_connected_ ;
                DDS_Boolean   is_real_robot_enabled_ ;
                DDS_Boolean   is_power_on_robot_ ;
                DDS_Boolean   is_emergency_stopped_ ;
                DDS_Boolean   is_protective_stopped_ ;
                DDS_Boolean   is_program_running_ ;
                DDS_Boolean   is_program_paused_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RobotModeDataMsg__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RobotModeDataMsg_Seq, RobotModeDataMsg_);

            NDDSUSERDllExport
            RTIBool RobotModeDataMsg__initialize(
                RobotModeDataMsg_* self);

            NDDSUSERDllExport
            RTIBool RobotModeDataMsg__initialize_ex(
                RobotModeDataMsg_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RobotModeDataMsg__initialize_w_params(
                RobotModeDataMsg_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RobotModeDataMsg__finalize(
                RobotModeDataMsg_* self);

            NDDSUSERDllExport
            void RobotModeDataMsg__finalize_ex(
                RobotModeDataMsg_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RobotModeDataMsg__finalize_w_params(
                RobotModeDataMsg_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RobotModeDataMsg__finalize_optional_members(
                RobotModeDataMsg_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RobotModeDataMsg__copy(
                RobotModeDataMsg_* dst,
                const RobotModeDataMsg_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace ur_msgs  */

#endif /* RobotModeDataMsg_ */

