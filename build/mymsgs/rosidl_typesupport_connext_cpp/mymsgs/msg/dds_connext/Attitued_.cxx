

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Attitued_.idl using "rtiddsgen".
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

#include "Attitued_.h"

#include <new>

namespace mymsgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Attitued_TYPENAME = "mymsgs::msg::dds_::Attitued_";

            DDS_TypeCode* Attitued__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Attitued__g_tc_members[7]=
                {

                    {
                        (char *)"time_boot_ms_",/* Member name */
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
                        (char *)"roll_",/* Member name */
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
                        (char *)"pitch_",/* Member name */
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
                        (char *)"yaw_",/* Member name */
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
                        (char *)"rollspeed_",/* Member name */
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
                        (char *)"pitchspeed_",/* Member name */
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
                        (char *)"yawspeed_",/* Member name */
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
                    }
                };

                static DDS_TypeCode Attitued__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mymsgs::msg::dds_::Attitued_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        Attitued__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Attitued_*/

                if (is_initialized) {
                    return &Attitued__g_tc;
                }

                Attitued__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                Attitued__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Attitued__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Attitued__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Attitued__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Attitued__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Attitued__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                is_initialized = RTI_TRUE;

                return &Attitued__g_tc;
            }

            RTIBool Attitued__initialize(
                Attitued_* sample) {
                return mymsgs::msg::dds_::Attitued__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Attitued__initialize_ex(
                Attitued_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mymsgs::msg::dds_::Attitued__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Attitued__initialize_w_params(
                Attitued_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->time_boot_ms_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->roll_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->pitch_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->yaw_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->rollspeed_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->pitchspeed_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->yawspeed_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Attitued__finalize(
                Attitued_* sample)
            {

                mymsgs::msg::dds_::Attitued__finalize_ex(sample,RTI_TRUE);
            }

            void Attitued__finalize_ex(
                Attitued_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mymsgs::msg::dds_::Attitued__finalize_w_params(
                    sample,&deallocParams);
            }

            void Attitued__finalize_w_params(
                Attitued_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void Attitued__finalize_optional_members(
                Attitued_* sample, RTIBool deletePointers)
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

            RTIBool Attitued__copy(
                Attitued_* dst,
                const Attitued_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyUnsignedLong (
                        &dst->time_boot_ms_, &src->time_boot_ms_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->roll_, &src->roll_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->pitch_, &src->pitch_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->yaw_, &src->yaw_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->rollspeed_, &src->rollspeed_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->pitchspeed_, &src->pitchspeed_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->yawspeed_, &src->yawspeed_)) { 
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
            * Configure and implement 'Attitued_' sequence class.
            */
            #define T Attitued_
            #define TSeq Attitued_Seq

            #define T_initialize_w_params mymsgs::msg::dds_::Attitued__initialize_w_params

            #define T_finalize_w_params   mymsgs::msg::dds_::Attitued__finalize_w_params
            #define T_copy       mymsgs::msg::dds_::Attitued__copy

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

