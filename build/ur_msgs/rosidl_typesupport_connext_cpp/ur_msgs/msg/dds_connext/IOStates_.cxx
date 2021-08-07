

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IOStates_.idl using "rtiddsgen".
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

#include "IOStates_.h"

#include <new>

namespace ur_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *IOStates_TYPENAME = "ur_msgs::msg::dds_::IOStates_";

            DDS_TypeCode* IOStates__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode IOStates__g_tc_digital_in_states__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode IOStates__g_tc_digital_out_states__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode IOStates__g_tc_flag_states__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode IOStates__g_tc_analog_in_states__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode IOStates__g_tc_analog_out_states__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member IOStates__g_tc_members[5]=
                {

                    {
                        (char *)"digital_in_states_",/* Member name */
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
                        (char *)"digital_out_states_",/* Member name */
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
                        (char *)"flag_states_",/* Member name */
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
                        (char *)"analog_in_states_",/* Member name */
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
                        (char *)"analog_out_states_",/* Member name */
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
                    }
                };

                static DDS_TypeCode IOStates__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ur_msgs::msg::dds_::IOStates_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        IOStates__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for IOStates_*/

                if (is_initialized) {
                    return &IOStates__g_tc;
                }

                IOStates__g_tc_digital_in_states__sequence._data._typeCode = (RTICdrTypeCode *)ur_msgs::msg::dds_::Digital__get_typecode();

                IOStates__g_tc_digital_out_states__sequence._data._typeCode = (RTICdrTypeCode *)ur_msgs::msg::dds_::Digital__get_typecode();

                IOStates__g_tc_flag_states__sequence._data._typeCode = (RTICdrTypeCode *)ur_msgs::msg::dds_::Digital__get_typecode();

                IOStates__g_tc_analog_in_states__sequence._data._typeCode = (RTICdrTypeCode *)ur_msgs::msg::dds_::Analog__get_typecode();

                IOStates__g_tc_analog_out_states__sequence._data._typeCode = (RTICdrTypeCode *)ur_msgs::msg::dds_::Analog__get_typecode();

                IOStates__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& IOStates__g_tc_digital_in_states__sequence;
                IOStates__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& IOStates__g_tc_digital_out_states__sequence;
                IOStates__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& IOStates__g_tc_flag_states__sequence;
                IOStates__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& IOStates__g_tc_analog_in_states__sequence;
                IOStates__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& IOStates__g_tc_analog_out_states__sequence;

                is_initialized = RTI_TRUE;

                return &IOStates__g_tc;
            }

            RTIBool IOStates__initialize(
                IOStates_* sample) {
                return ur_msgs::msg::dds_::IOStates__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool IOStates__initialize_ex(
                IOStates_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ur_msgs::msg::dds_::IOStates__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool IOStates__initialize_w_params(
                IOStates_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    ur_msgs::msg::dds_::Digital_Seq_initialize(&sample->digital_in_states_ );
                    ur_msgs::msg::dds_::Digital_Seq_set_element_allocation_params(&sample->digital_in_states_ ,allocParams);
                    ur_msgs::msg::dds_::Digital_Seq_set_absolute_maximum(&sample->digital_in_states_ , RTI_INT32_MAX);
                    if (!ur_msgs::msg::dds_::Digital_Seq_set_maximum(&sample->digital_in_states_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    ur_msgs::msg::dds_::Digital_Seq_set_length(&sample->digital_in_states_, 0);
                }
                if (allocParams->allocate_memory) {
                    ur_msgs::msg::dds_::Digital_Seq_initialize(&sample->digital_out_states_ );
                    ur_msgs::msg::dds_::Digital_Seq_set_element_allocation_params(&sample->digital_out_states_ ,allocParams);
                    ur_msgs::msg::dds_::Digital_Seq_set_absolute_maximum(&sample->digital_out_states_ , RTI_INT32_MAX);
                    if (!ur_msgs::msg::dds_::Digital_Seq_set_maximum(&sample->digital_out_states_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    ur_msgs::msg::dds_::Digital_Seq_set_length(&sample->digital_out_states_, 0);
                }
                if (allocParams->allocate_memory) {
                    ur_msgs::msg::dds_::Digital_Seq_initialize(&sample->flag_states_ );
                    ur_msgs::msg::dds_::Digital_Seq_set_element_allocation_params(&sample->flag_states_ ,allocParams);
                    ur_msgs::msg::dds_::Digital_Seq_set_absolute_maximum(&sample->flag_states_ , RTI_INT32_MAX);
                    if (!ur_msgs::msg::dds_::Digital_Seq_set_maximum(&sample->flag_states_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    ur_msgs::msg::dds_::Digital_Seq_set_length(&sample->flag_states_, 0);
                }
                if (allocParams->allocate_memory) {
                    ur_msgs::msg::dds_::Analog_Seq_initialize(&sample->analog_in_states_ );
                    ur_msgs::msg::dds_::Analog_Seq_set_element_allocation_params(&sample->analog_in_states_ ,allocParams);
                    ur_msgs::msg::dds_::Analog_Seq_set_absolute_maximum(&sample->analog_in_states_ , RTI_INT32_MAX);
                    if (!ur_msgs::msg::dds_::Analog_Seq_set_maximum(&sample->analog_in_states_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    ur_msgs::msg::dds_::Analog_Seq_set_length(&sample->analog_in_states_, 0);
                }
                if (allocParams->allocate_memory) {
                    ur_msgs::msg::dds_::Analog_Seq_initialize(&sample->analog_out_states_ );
                    ur_msgs::msg::dds_::Analog_Seq_set_element_allocation_params(&sample->analog_out_states_ ,allocParams);
                    ur_msgs::msg::dds_::Analog_Seq_set_absolute_maximum(&sample->analog_out_states_ , RTI_INT32_MAX);
                    if (!ur_msgs::msg::dds_::Analog_Seq_set_maximum(&sample->analog_out_states_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    ur_msgs::msg::dds_::Analog_Seq_set_length(&sample->analog_out_states_, 0);
                }
                return RTI_TRUE;
            }

            void IOStates__finalize(
                IOStates_* sample)
            {

                ur_msgs::msg::dds_::IOStates__finalize_ex(sample,RTI_TRUE);
            }

            void IOStates__finalize_ex(
                IOStates_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ur_msgs::msg::dds_::IOStates__finalize_w_params(
                    sample,&deallocParams);
            }

            void IOStates__finalize_w_params(
                IOStates_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                ur_msgs::msg::dds_::Digital_Seq_set_element_deallocation_params(
                    &sample->digital_in_states_,deallocParams);
                ur_msgs::msg::dds_::Digital_Seq_finalize(&sample->digital_in_states_);

                ur_msgs::msg::dds_::Digital_Seq_set_element_deallocation_params(
                    &sample->digital_out_states_,deallocParams);
                ur_msgs::msg::dds_::Digital_Seq_finalize(&sample->digital_out_states_);

                ur_msgs::msg::dds_::Digital_Seq_set_element_deallocation_params(
                    &sample->flag_states_,deallocParams);
                ur_msgs::msg::dds_::Digital_Seq_finalize(&sample->flag_states_);

                ur_msgs::msg::dds_::Analog_Seq_set_element_deallocation_params(
                    &sample->analog_in_states_,deallocParams);
                ur_msgs::msg::dds_::Analog_Seq_finalize(&sample->analog_in_states_);

                ur_msgs::msg::dds_::Analog_Seq_set_element_deallocation_params(
                    &sample->analog_out_states_,deallocParams);
                ur_msgs::msg::dds_::Analog_Seq_finalize(&sample->analog_out_states_);

            }

            void IOStates__finalize_optional_members(
                IOStates_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = ur_msgs::msg::dds_::Digital_Seq_get_length(
                        &sample->digital_in_states_);

                    for (i = 0; i < length; i++) {
                        ur_msgs::msg::dds_::Digital__finalize_optional_members(
                            ur_msgs::msg::dds_::Digital_Seq_get_reference(
                                &sample->digital_in_states_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = ur_msgs::msg::dds_::Digital_Seq_get_length(
                        &sample->digital_out_states_);

                    for (i = 0; i < length; i++) {
                        ur_msgs::msg::dds_::Digital__finalize_optional_members(
                            ur_msgs::msg::dds_::Digital_Seq_get_reference(
                                &sample->digital_out_states_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = ur_msgs::msg::dds_::Digital_Seq_get_length(
                        &sample->flag_states_);

                    for (i = 0; i < length; i++) {
                        ur_msgs::msg::dds_::Digital__finalize_optional_members(
                            ur_msgs::msg::dds_::Digital_Seq_get_reference(
                                &sample->flag_states_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = ur_msgs::msg::dds_::Analog_Seq_get_length(
                        &sample->analog_in_states_);

                    for (i = 0; i < length; i++) {
                        ur_msgs::msg::dds_::Analog__finalize_optional_members(
                            ur_msgs::msg::dds_::Analog_Seq_get_reference(
                                &sample->analog_in_states_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = ur_msgs::msg::dds_::Analog_Seq_get_length(
                        &sample->analog_out_states_);

                    for (i = 0; i < length; i++) {
                        ur_msgs::msg::dds_::Analog__finalize_optional_members(
                            ur_msgs::msg::dds_::Analog_Seq_get_reference(
                                &sample->analog_out_states_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool IOStates__copy(
                IOStates_* dst,
                const IOStates_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!ur_msgs::msg::dds_::Digital_Seq_copy(&dst->digital_in_states_ ,
                    &src->digital_in_states_ )) {
                        return RTI_FALSE;
                    }
                    if (!ur_msgs::msg::dds_::Digital_Seq_copy(&dst->digital_out_states_ ,
                    &src->digital_out_states_ )) {
                        return RTI_FALSE;
                    }
                    if (!ur_msgs::msg::dds_::Digital_Seq_copy(&dst->flag_states_ ,
                    &src->flag_states_ )) {
                        return RTI_FALSE;
                    }
                    if (!ur_msgs::msg::dds_::Analog_Seq_copy(&dst->analog_in_states_ ,
                    &src->analog_in_states_ )) {
                        return RTI_FALSE;
                    }
                    if (!ur_msgs::msg::dds_::Analog_Seq_copy(&dst->analog_out_states_ ,
                    &src->analog_out_states_ )) {
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
            * Configure and implement 'IOStates_' sequence class.
            */
            #define T IOStates_
            #define TSeq IOStates_Seq

            #define T_initialize_w_params ur_msgs::msg::dds_::IOStates__initialize_w_params

            #define T_finalize_w_params   ur_msgs::msg::dds_::IOStates__finalize_w_params
            #define T_copy       ur_msgs::msg::dds_::IOStates__copy

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

