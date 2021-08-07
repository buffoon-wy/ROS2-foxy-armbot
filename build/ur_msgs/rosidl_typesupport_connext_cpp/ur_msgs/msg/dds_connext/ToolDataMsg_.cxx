

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ToolDataMsg_.idl using "rtiddsgen".
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

#include "ToolDataMsg_.h"

#include <new>

namespace ur_msgs {
    namespace msg {
        namespace dds_ {
            namespace ToolDataMsg_Constants {
            } /* namespace ToolDataMsg_Constants  */

            /* ========================================================================= */
            const char *ToolDataMsg_TYPENAME = "ur_msgs::msg::dds_::ToolDataMsg_";

            DDS_TypeCode* ToolDataMsg__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ToolDataMsg__g_tc_members[8]=
                {

                    {
                        (char *)"analog_input_range2_",/* Member name */
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
                        (char *)"analog_input_range3_",/* Member name */
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
                        (char *)"analog_input2_",/* Member name */
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
                        (char *)"analog_input3_",/* Member name */
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
                        (char *)"tool_output_voltage_",/* Member name */
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
                        (char *)"tool_current_",/* Member name */
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
                        (char *)"tool_temperature_",/* Member name */
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
                        (char *)"tool_mode_",/* Member name */
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

                static DDS_TypeCode ToolDataMsg__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ur_msgs::msg::dds_::ToolDataMsg_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        ToolDataMsg__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ToolDataMsg_*/

                if (is_initialized) {
                    return &ToolDataMsg__g_tc;
                }

                ToolDataMsg__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                ToolDataMsg__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                ToolDataMsg__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ToolDataMsg__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ToolDataMsg__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                ToolDataMsg__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                ToolDataMsg__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                ToolDataMsg__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &ToolDataMsg__g_tc;
            }

            RTIBool ToolDataMsg__initialize(
                ToolDataMsg_* sample) {
                return ur_msgs::msg::dds_::ToolDataMsg__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ToolDataMsg__initialize_ex(
                ToolDataMsg_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ur_msgs::msg::dds_::ToolDataMsg__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ToolDataMsg__initialize_w_params(
                ToolDataMsg_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->analog_input_range2_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->analog_input_range3_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->analog_input2_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->analog_input3_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->tool_output_voltage_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->tool_current_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->tool_temperature_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->tool_mode_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void ToolDataMsg__finalize(
                ToolDataMsg_* sample)
            {

                ur_msgs::msg::dds_::ToolDataMsg__finalize_ex(sample,RTI_TRUE);
            }

            void ToolDataMsg__finalize_ex(
                ToolDataMsg_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ur_msgs::msg::dds_::ToolDataMsg__finalize_w_params(
                    sample,&deallocParams);
            }

            void ToolDataMsg__finalize_w_params(
                ToolDataMsg_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void ToolDataMsg__finalize_optional_members(
                ToolDataMsg_* sample, RTIBool deletePointers)
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

            RTIBool ToolDataMsg__copy(
                ToolDataMsg_* dst,
                const ToolDataMsg_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->analog_input_range2_, &src->analog_input_range2_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->analog_input_range3_, &src->analog_input_range3_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->analog_input2_, &src->analog_input2_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->analog_input3_, &src->analog_input3_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->tool_output_voltage_, &src->tool_output_voltage_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->tool_current_, &src->tool_current_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->tool_temperature_, &src->tool_temperature_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->tool_mode_, &src->tool_mode_)) { 
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
            * Configure and implement 'ToolDataMsg_' sequence class.
            */
            #define T ToolDataMsg_
            #define TSeq ToolDataMsg_Seq

            #define T_initialize_w_params ur_msgs::msg::dds_::ToolDataMsg__initialize_w_params

            #define T_finalize_w_params   ur_msgs::msg::dds_::ToolDataMsg__finalize_w_params
            #define T_copy       ur_msgs::msg::dds_::ToolDataMsg__copy

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

