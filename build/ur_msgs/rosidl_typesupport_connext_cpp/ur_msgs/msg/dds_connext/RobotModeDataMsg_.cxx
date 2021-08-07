

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RobotModeDataMsg_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "RobotModeDataMsg_.h"

#include <new>

namespace ur_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *RobotModeDataMsg_TYPENAME = "ur_msgs::msg::dds_::RobotModeDataMsg_";

            DDS_TypeCode* RobotModeDataMsg__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotModeDataMsg__g_tc_members[8]=
                {

                    {
                        (char *)"timestamp_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"is_robot_connected_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"is_real_robot_enabled_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"is_power_on_robot_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"is_emergency_stopped_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"is_protective_stopped_",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"is_program_running_",/* Member name */
                        {
                            6,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"is_program_paused_",/* Member name */
                        {
                            7,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode RobotModeDataMsg__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ur_msgs::msg::dds_::RobotModeDataMsg_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        RobotModeDataMsg__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RobotModeDataMsg_*/

                if (is_initialized) {
                    return &RobotModeDataMsg__g_tc;
                }

                RobotModeDataMsg__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                RobotModeDataMsg__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                RobotModeDataMsg__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                RobotModeDataMsg__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                RobotModeDataMsg__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                RobotModeDataMsg__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                RobotModeDataMsg__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                RobotModeDataMsg__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &RobotModeDataMsg__g_tc;
            }

            RTIBool RobotModeDataMsg__initialize(
                RobotModeDataMsg_* sample) {
                return ur_msgs::msg::dds_::RobotModeDataMsg__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RobotModeDataMsg__initialize_ex(
                RobotModeDataMsg_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ur_msgs::msg::dds_::RobotModeDataMsg__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RobotModeDataMsg__initialize_w_params(
                RobotModeDataMsg_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->timestamp_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->is_robot_connected_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->is_real_robot_enabled_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->is_power_on_robot_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->is_emergency_stopped_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->is_protective_stopped_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->is_program_running_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->is_program_paused_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void RobotModeDataMsg__finalize(
                RobotModeDataMsg_* sample)
            {

                ur_msgs::msg::dds_::RobotModeDataMsg__finalize_ex(sample,RTI_TRUE);
            }

            void RobotModeDataMsg__finalize_ex(
                RobotModeDataMsg_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ur_msgs::msg::dds_::RobotModeDataMsg__finalize_w_params(
                    sample,&deallocParams);
            }

            void RobotModeDataMsg__finalize_w_params(
                RobotModeDataMsg_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void RobotModeDataMsg__finalize_optional_members(
                RobotModeDataMsg_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool RobotModeDataMsg__copy(
                RobotModeDataMsg_* dst,
                const RobotModeDataMsg_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->timestamp_, &src->timestamp_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->is_robot_connected_, &src->is_robot_connected_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->is_real_robot_enabled_, &src->is_real_robot_enabled_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->is_power_on_robot_, &src->is_power_on_robot_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->is_emergency_stopped_, &src->is_emergency_stopped_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->is_protective_stopped_, &src->is_protective_stopped_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->is_program_running_, &src->is_program_running_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->is_program_paused_, &src->is_program_paused_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'RobotModeDataMsg_' sequence class.
            */
            #define T RobotModeDataMsg_
            #define TSeq RobotModeDataMsg_Seq

            #define T_initialize_w_params ur_msgs::msg::dds_::RobotModeDataMsg__initialize_w_params

            #define T_finalize_w_params   ur_msgs::msg::dds_::RobotModeDataMsg__finalize_w_params
            #define T_copy       ur_msgs::msg::dds_::RobotModeDataMsg__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace ur_msgs  */

