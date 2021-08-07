

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Heart_.idl using "rtiddsgen".
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

#include "Heart_.h"

#include <new>

namespace mymsgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Heart_TYPENAME = "mymsgs::msg::dds_::Heart_";

            DDS_TypeCode* Heart__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Heart__g_tc_members[4]=
                {

                    {
                        (char *)"error_code_",/* Member name */
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
                        (char *)"type_",/* Member name */
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
                        (char *)"base_mode_",/* Member name */
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
                        (char *)"system_status_",/* Member name */
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
                    }
                };

                static DDS_TypeCode Heart__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mymsgs::msg::dds_::Heart_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        Heart__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Heart_*/

                if (is_initialized) {
                    return &Heart__g_tc;
                }

                Heart__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                Heart__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Heart__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Heart__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &Heart__g_tc;
            }

            RTIBool Heart__initialize(
                Heart_* sample) {
                return mymsgs::msg::dds_::Heart__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Heart__initialize_ex(
                Heart_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mymsgs::msg::dds_::Heart__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Heart__initialize_w_params(
                Heart_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->error_code_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->type_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->base_mode_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->system_status_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Heart__finalize(
                Heart_* sample)
            {

                mymsgs::msg::dds_::Heart__finalize_ex(sample,RTI_TRUE);
            }

            void Heart__finalize_ex(
                Heart_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mymsgs::msg::dds_::Heart__finalize_w_params(
                    sample,&deallocParams);
            }

            void Heart__finalize_w_params(
                Heart_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void Heart__finalize_optional_members(
                Heart_* sample, RTIBool deletePointers)
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

            RTIBool Heart__copy(
                Heart_* dst,
                const Heart_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyUnsignedLong (
                        &dst->error_code_, &src->error_code_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->type_, &src->type_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->base_mode_, &src->base_mode_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->system_status_, &src->system_status_)) { 
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
            * Configure and implement 'Heart_' sequence class.
            */
            #define T Heart_
            #define TSeq Heart_Seq

            #define T_initialize_w_params mymsgs::msg::dds_::Heart__initialize_w_params

            #define T_finalize_w_params   mymsgs::msg::dds_::Heart__finalize_w_params
            #define T_copy       mymsgs::msg::dds_::Heart__copy

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
} /* namespace mymsgs  */

