

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Twis_.idl using "rtiddsgen".
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

#include "Twis_.h"

#include <new>

namespace mymsgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Twis_TYPENAME = "mymsgs::msg::dds_::Twis_";

            DDS_TypeCode* Twis__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Twis__g_tc_members[7]=
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
                        (char *)"vx_",/* Member name */
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
                        (char *)"vy_",/* Member name */
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
                        (char *)"vz_",/* Member name */
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
                        (char *)"wx_",/* Member name */
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
                        (char *)"wy_",/* Member name */
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
                        (char *)"wz_",/* Member name */
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

                static DDS_TypeCode Twis__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mymsgs::msg::dds_::Twis_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        Twis__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Twis_*/

                if (is_initialized) {
                    return &Twis__g_tc;
                }

                Twis__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                Twis__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Twis__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Twis__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Twis__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Twis__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Twis__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &Twis__g_tc;
            }

            RTIBool Twis__initialize(
                Twis_* sample) {
                return mymsgs::msg::dds_::Twis__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Twis__initialize_ex(
                Twis_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mymsgs::msg::dds_::Twis__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Twis__initialize_w_params(
                Twis_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!RTICdrType_initDouble(&sample->vx_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->vy_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->vz_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->wx_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->wy_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->wz_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Twis__finalize(
                Twis_* sample)
            {

                mymsgs::msg::dds_::Twis__finalize_ex(sample,RTI_TRUE);
            }

            void Twis__finalize_ex(
                Twis_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mymsgs::msg::dds_::Twis__finalize_w_params(
                    sample,&deallocParams);
            }

            void Twis__finalize_w_params(
                Twis_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void Twis__finalize_optional_members(
                Twis_* sample, RTIBool deletePointers)
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

            RTIBool Twis__copy(
                Twis_* dst,
                const Twis_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyUnsignedLong (
                        &dst->time_boot_ms_, &src->time_boot_ms_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->vx_, &src->vx_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->vy_, &src->vy_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->vz_, &src->vz_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wx_, &src->wx_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wy_, &src->wy_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->wz_, &src->wz_)) { 
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
            * Configure and implement 'Twis_' sequence class.
            */
            #define T Twis_
            #define TSeq Twis_Seq

            #define T_initialize_w_params mymsgs::msg::dds_::Twis__initialize_w_params

            #define T_finalize_w_params   mymsgs::msg::dds_::Twis__finalize_w_params
            #define T_copy       mymsgs::msg::dds_::Twis__copy

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

