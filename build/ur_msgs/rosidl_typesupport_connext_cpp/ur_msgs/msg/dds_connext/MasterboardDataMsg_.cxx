

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MasterboardDataMsg_.idl using "rtiddsgen".
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

#include "MasterboardDataMsg_.h"

#include <new>

namespace ur_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MasterboardDataMsg_TYPENAME = "ur_msgs::msg::dds_::MasterboardDataMsg_";

            DDS_TypeCode* MasterboardDataMsg__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MasterboardDataMsg__g_tc_members[15]=
                {

                    {
                        (char *)"digital_input_bits_",/* Member name */
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
                        (char *)"digital_output_bits_",/* Member name */
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
                        (char *)"analog_input_range0_",/* Member name */
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
                        (char *)"analog_input_range1_",/* Member name */
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
                        (char *)"analog_input0_",/* Member name */
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
                        (char *)"analog_input1_",/* Member name */
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
                        (char *)"analog_output_domain0_",/* Member name */
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
                        (char *)"analog_output_domain1_",/* Member name */
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
                        (char *)"analog_output0_",/* Member name */
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
                        (char *)"analog_output1_",/* Member name */
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
                        (char *)"masterboard_temperature_",/* Member name */
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
                        (char *)"robot_current_",/* Member name */
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
                        (char *)"master_io_current_",/* Member name */
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
                        (char *)"master_safety_state_",/* Member name */
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
                        (char *)"master_onoff_state_",/* Member name */
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
                    }
                };

                static DDS_TypeCode MasterboardDataMsg__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ur_msgs::msg::dds_::MasterboardDataMsg_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        15, /* Number of members */
                        MasterboardDataMsg__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MasterboardDataMsg_*/

                if (is_initialized) {
                    return &MasterboardDataMsg__g_tc;
                }

                MasterboardDataMsg__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                MasterboardDataMsg__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                MasterboardDataMsg__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                MasterboardDataMsg__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                MasterboardDataMsg__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                MasterboardDataMsg__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                MasterboardDataMsg__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                MasterboardDataMsg__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                MasterboardDataMsg__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                MasterboardDataMsg__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                MasterboardDataMsg__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MasterboardDataMsg__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MasterboardDataMsg__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MasterboardDataMsg__g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                MasterboardDataMsg__g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &MasterboardDataMsg__g_tc;
            }

            RTIBool MasterboardDataMsg__initialize(
                MasterboardDataMsg_* sample) {
                return ur_msgs::msg::dds_::MasterboardDataMsg__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MasterboardDataMsg__initialize_ex(
                MasterboardDataMsg_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ur_msgs::msg::dds_::MasterboardDataMsg__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MasterboardDataMsg__initialize_w_params(
                MasterboardDataMsg_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->digital_input_bits_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->digital_output_bits_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->analog_input_range0_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->analog_input_range1_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->analog_input0_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->analog_input1_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->analog_output_domain0_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->analog_output_domain1_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->analog_output0_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->analog_output1_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->masterboard_temperature_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->robot_current_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->master_io_current_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->master_safety_state_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->master_onoff_state_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void MasterboardDataMsg__finalize(
                MasterboardDataMsg_* sample)
            {

                ur_msgs::msg::dds_::MasterboardDataMsg__finalize_ex(sample,RTI_TRUE);
            }

            void MasterboardDataMsg__finalize_ex(
                MasterboardDataMsg_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ur_msgs::msg::dds_::MasterboardDataMsg__finalize_w_params(
                    sample,&deallocParams);
            }

            void MasterboardDataMsg__finalize_w_params(
                MasterboardDataMsg_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void MasterboardDataMsg__finalize_optional_members(
                MasterboardDataMsg_* sample, RTIBool deletePointers)
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

            RTIBool MasterboardDataMsg__copy(
                MasterboardDataMsg_* dst,
                const MasterboardDataMsg_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyUnsignedLong (
                        &dst->digital_input_bits_, &src->digital_input_bits_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->digital_output_bits_, &src->digital_output_bits_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->analog_input_range0_, &src->analog_input_range0_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->analog_input_range1_, &src->analog_input_range1_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->analog_input0_, &src->analog_input0_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->analog_input1_, &src->analog_input1_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->analog_output_domain0_, &src->analog_output_domain0_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->analog_output_domain1_, &src->analog_output_domain1_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->analog_output0_, &src->analog_output0_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->analog_output1_, &src->analog_output1_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->masterboard_temperature_, &src->masterboard_temperature_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->robot_current_, &src->robot_current_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->master_io_current_, &src->master_io_current_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->master_safety_state_, &src->master_safety_state_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->master_onoff_state_, &src->master_onoff_state_)) { 
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
            * Configure and implement 'MasterboardDataMsg_' sequence class.
            */
            #define T MasterboardDataMsg_
            #define TSeq MasterboardDataMsg_Seq

            #define T_initialize_w_params ur_msgs::msg::dds_::MasterboardDataMsg__initialize_w_params

            #define T_finalize_w_params   ur_msgs::msg::dds_::MasterboardDataMsg__finalize_w_params
            #define T_copy       ur_msgs::msg::dds_::MasterboardDataMsg__copy

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

