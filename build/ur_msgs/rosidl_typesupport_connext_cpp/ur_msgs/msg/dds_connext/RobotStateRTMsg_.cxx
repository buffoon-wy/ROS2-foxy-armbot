

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RobotStateRTMsg_.idl using "rtiddsgen".
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

#include "RobotStateRTMsg_.h"

#include <new>

namespace ur_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *RobotStateRTMsg_TYPENAME = "ur_msgs::msg::dds_::RobotStateRTMsg_";

            DDS_TypeCode* RobotStateRTMsg__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RobotStateRTMsg__g_tc_q_target__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_qd_target__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_qdd_target__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_i_target__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_m_target__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_q_actual__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_qd_actual__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_i_actual__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_tool_acc_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_tcp_force__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_tool_vector__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_tcp_speed__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_motor_temperatures__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RobotStateRTMsg__g_tc_joint_modes__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member RobotStateRTMsg__g_tc_members[19]=
                {

                    {
                        (char *)"time_",/* Member name */
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
                        (char *)"q_target_",/* Member name */
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
                        (char *)"qd_target_",/* Member name */
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
                        (char *)"qdd_target_",/* Member name */
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
                        (char *)"i_target_",/* Member name */
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
                        (char *)"m_target_",/* Member name */
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
                        (char *)"q_actual_",/* Member name */
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
                        (char *)"qd_actual_",/* Member name */
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
                    }, 
                    {
                        (char *)"i_actual_",/* Member name */
                        {
                            8,/* Representation ID */          
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
                        (char *)"tool_acc_values_",/* Member name */
                        {
                            9,/* Representation ID */          
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
                        (char *)"tcp_force_",/* Member name */
                        {
                            10,/* Representation ID */          
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
                        (char *)"tool_vector_",/* Member name */
                        {
                            11,/* Representation ID */          
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
                        (char *)"tcp_speed_",/* Member name */
                        {
                            12,/* Representation ID */          
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
                        (char *)"digital_input_bits_",/* Member name */
                        {
                            13,/* Representation ID */          
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
                        (char *)"motor_temperatures_",/* Member name */
                        {
                            14,/* Representation ID */          
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
                        (char *)"controller_timer_",/* Member name */
                        {
                            15,/* Representation ID */          
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
                        (char *)"test_value_",/* Member name */
                        {
                            16,/* Representation ID */          
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
                        (char *)"robot_mode_",/* Member name */
                        {
                            17,/* Representation ID */          
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
                        (char *)"joint_modes_",/* Member name */
                        {
                            18,/* Representation ID */          
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

                static DDS_TypeCode RobotStateRTMsg__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ur_msgs::msg::dds_::RobotStateRTMsg_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        19, /* Number of members */
                        RobotStateRTMsg__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RobotStateRTMsg_*/

                if (is_initialized) {
                    return &RobotStateRTMsg__g_tc;
                }

                RobotStateRTMsg__g_tc_q_target__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_qd_target__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_qdd_target__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_i_target__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_m_target__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_q_actual__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_qd_actual__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_i_actual__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_tool_acc_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_tcp_force__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_tool_vector__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_tcp_speed__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_motor_temperatures__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_joint_modes__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_q_target__sequence;
                RobotStateRTMsg__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_qd_target__sequence;
                RobotStateRTMsg__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_qdd_target__sequence;
                RobotStateRTMsg__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_i_target__sequence;
                RobotStateRTMsg__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_m_target__sequence;
                RobotStateRTMsg__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_q_actual__sequence;
                RobotStateRTMsg__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_qd_actual__sequence;
                RobotStateRTMsg__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_i_actual__sequence;
                RobotStateRTMsg__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_tool_acc_values__sequence;
                RobotStateRTMsg__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_tcp_force__sequence;
                RobotStateRTMsg__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_tool_vector__sequence;
                RobotStateRTMsg__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_tcp_speed__sequence;
                RobotStateRTMsg__g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_motor_temperatures__sequence;
                RobotStateRTMsg__g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                RobotStateRTMsg__g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)& RobotStateRTMsg__g_tc_joint_modes__sequence;

                is_initialized = RTI_TRUE;

                return &RobotStateRTMsg__g_tc;
            }

            RTIBool RobotStateRTMsg__initialize(
                RobotStateRTMsg_* sample) {
                return ur_msgs::msg::dds_::RobotStateRTMsg__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RobotStateRTMsg__initialize_ex(
                RobotStateRTMsg_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ur_msgs::msg::dds_::RobotStateRTMsg__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RobotStateRTMsg__initialize_w_params(
                RobotStateRTMsg_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->time_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->q_target_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->q_target_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->q_target_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->q_target_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->qd_target_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->qd_target_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->qd_target_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->qd_target_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->qdd_target_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->qdd_target_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->qdd_target_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->qdd_target_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->i_target_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->i_target_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->i_target_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->i_target_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->m_target_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->m_target_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->m_target_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->m_target_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->q_actual_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->q_actual_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->q_actual_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->q_actual_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->qd_actual_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->qd_actual_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->qd_actual_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->qd_actual_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->i_actual_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->i_actual_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->i_actual_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->i_actual_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->tool_acc_values_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->tool_acc_values_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->tool_acc_values_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->tool_acc_values_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->tcp_force_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->tcp_force_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->tcp_force_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->tcp_force_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->tool_vector_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->tool_vector_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->tool_vector_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->tool_vector_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->tcp_speed_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->tcp_speed_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->tcp_speed_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->tcp_speed_, 0);
                }

                if (!RTICdrType_initDouble(&sample->digital_input_bits_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->motor_temperatures_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->motor_temperatures_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->motor_temperatures_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->motor_temperatures_, 0);
                }

                if (!RTICdrType_initDouble(&sample->controller_timer_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->test_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->robot_mode_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->joint_modes_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->joint_modes_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->joint_modes_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->joint_modes_, 0);
                }
                return RTI_TRUE;
            }

            void RobotStateRTMsg__finalize(
                RobotStateRTMsg_* sample)
            {

                ur_msgs::msg::dds_::RobotStateRTMsg__finalize_ex(sample,RTI_TRUE);
            }

            void RobotStateRTMsg__finalize_ex(
                RobotStateRTMsg_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ur_msgs::msg::dds_::RobotStateRTMsg__finalize_w_params(
                    sample,&deallocParams);
            }

            void RobotStateRTMsg__finalize_w_params(
                RobotStateRTMsg_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_DoubleSeq_finalize(&sample->q_target_);

                DDS_DoubleSeq_finalize(&sample->qd_target_);

                DDS_DoubleSeq_finalize(&sample->qdd_target_);

                DDS_DoubleSeq_finalize(&sample->i_target_);

                DDS_DoubleSeq_finalize(&sample->m_target_);

                DDS_DoubleSeq_finalize(&sample->q_actual_);

                DDS_DoubleSeq_finalize(&sample->qd_actual_);

                DDS_DoubleSeq_finalize(&sample->i_actual_);

                DDS_DoubleSeq_finalize(&sample->tool_acc_values_);

                DDS_DoubleSeq_finalize(&sample->tcp_force_);

                DDS_DoubleSeq_finalize(&sample->tool_vector_);

                DDS_DoubleSeq_finalize(&sample->tcp_speed_);

                DDS_DoubleSeq_finalize(&sample->motor_temperatures_);

                DDS_DoubleSeq_finalize(&sample->joint_modes_);

            }

            void RobotStateRTMsg__finalize_optional_members(
                RobotStateRTMsg_* sample, RTIBool deletePointers)
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

            RTIBool RobotStateRTMsg__copy(
                RobotStateRTMsg_* dst,
                const RobotStateRTMsg_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->time_, &src->time_)) { 
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->q_target_ ,
                    &src->q_target_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->qd_target_ ,
                    &src->qd_target_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->qdd_target_ ,
                    &src->qdd_target_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->i_target_ ,
                    &src->i_target_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->m_target_ ,
                    &src->m_target_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->q_actual_ ,
                    &src->q_actual_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->qd_actual_ ,
                    &src->qd_actual_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->i_actual_ ,
                    &src->i_actual_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->tool_acc_values_ ,
                    &src->tool_acc_values_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->tcp_force_ ,
                    &src->tcp_force_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->tool_vector_ ,
                    &src->tool_vector_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->tcp_speed_ ,
                    &src->tcp_speed_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->digital_input_bits_, &src->digital_input_bits_)) { 
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->motor_temperatures_ ,
                    &src->motor_temperatures_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->controller_timer_, &src->controller_timer_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->test_value_, &src->test_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->robot_mode_, &src->robot_mode_)) { 
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->joint_modes_ ,
                    &src->joint_modes_ )) {
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
            * Configure and implement 'RobotStateRTMsg_' sequence class.
            */
            #define T RobotStateRTMsg_
            #define TSeq RobotStateRTMsg_Seq

            #define T_initialize_w_params ur_msgs::msg::dds_::RobotStateRTMsg__initialize_w_params

            #define T_finalize_w_params   ur_msgs::msg::dds_::RobotStateRTMsg__finalize_w_params
            #define T_copy       ur_msgs::msg::dds_::RobotStateRTMsg__copy

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

