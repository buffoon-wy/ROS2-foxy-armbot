

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetPayload_.idl using "rtiddsgen".
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

#include "SetPayload_.h"

#include <new>

namespace ur_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetPayload_Request_TYPENAME = "ur_msgs::srv::dds_::SetPayload_Request_";

            DDS_TypeCode* SetPayload_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetPayload_Request__g_tc_members[2]=
                {

                    {
                        (char *)"payload_",/* Member name */
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
                        (char *)"center_of_gravity_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SetPayload_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ur_msgs::srv::dds_::SetPayload_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SetPayload_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetPayload_Request_*/

                if (is_initialized) {
                    return &SetPayload_Request__g_tc;
                }

                SetPayload_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                SetPayload_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Vector3__get_typecode();

                is_initialized = RTI_TRUE;

                return &SetPayload_Request__g_tc;
            }

            RTIBool SetPayload_Request__initialize(
                SetPayload_Request_* sample) {
                return ur_msgs::srv::dds_::SetPayload_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetPayload_Request__initialize_ex(
                SetPayload_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ur_msgs::srv::dds_::SetPayload_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetPayload_Request__initialize_w_params(
                SetPayload_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->payload_)) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Vector3__initialize_w_params(&sample->center_of_gravity_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SetPayload_Request__finalize(
                SetPayload_Request_* sample)
            {

                ur_msgs::srv::dds_::SetPayload_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetPayload_Request__finalize_ex(
                SetPayload_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ur_msgs::srv::dds_::SetPayload_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetPayload_Request__finalize_w_params(
                SetPayload_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::Vector3__finalize_w_params(&sample->center_of_gravity_,deallocParams);

            }

            void SetPayload_Request__finalize_optional_members(
                SetPayload_Request_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Vector3__finalize_optional_members(&sample->center_of_gravity_, deallocParams->delete_pointers);
            }

            RTIBool SetPayload_Request__copy(
                SetPayload_Request_* dst,
                const SetPayload_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyFloat (
                        &dst->payload_, &src->payload_)) { 
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Vector3__copy(
                        &dst->center_of_gravity_,(const geometry_msgs::msg::dds_::Vector3_*)&src->center_of_gravity_)) {
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
            * Configure and implement 'SetPayload_Request_' sequence class.
            */
            #define T SetPayload_Request_
            #define TSeq SetPayload_Request_Seq

            #define T_initialize_w_params ur_msgs::srv::dds_::SetPayload_Request__initialize_w_params

            #define T_finalize_w_params   ur_msgs::srv::dds_::SetPayload_Request__finalize_w_params
            #define T_copy       ur_msgs::srv::dds_::SetPayload_Request__copy

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
    } /* namespace srv  */
} /* namespace ur_msgs  */
namespace ur_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetPayload_Response_TYPENAME = "ur_msgs::srv::dds_::SetPayload_Response_";

            DDS_TypeCode* SetPayload_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetPayload_Response__g_tc_members[1]=
                {

                    {
                        (char *)"success_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SetPayload_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ur_msgs::srv::dds_::SetPayload_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetPayload_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetPayload_Response_*/

                if (is_initialized) {
                    return &SetPayload_Response__g_tc;
                }

                SetPayload_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &SetPayload_Response__g_tc;
            }

            RTIBool SetPayload_Response__initialize(
                SetPayload_Response_* sample) {
                return ur_msgs::srv::dds_::SetPayload_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetPayload_Response__initialize_ex(
                SetPayload_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ur_msgs::srv::dds_::SetPayload_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetPayload_Response__initialize_w_params(
                SetPayload_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->success_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void SetPayload_Response__finalize(
                SetPayload_Response_* sample)
            {

                ur_msgs::srv::dds_::SetPayload_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetPayload_Response__finalize_ex(
                SetPayload_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ur_msgs::srv::dds_::SetPayload_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetPayload_Response__finalize_w_params(
                SetPayload_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SetPayload_Response__finalize_optional_members(
                SetPayload_Response_* sample, RTIBool deletePointers)
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

            RTIBool SetPayload_Response__copy(
                SetPayload_Response_* dst,
                const SetPayload_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
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
            * Configure and implement 'SetPayload_Response_' sequence class.
            */
            #define T SetPayload_Response_
            #define TSeq SetPayload_Response_Seq

            #define T_initialize_w_params ur_msgs::srv::dds_::SetPayload_Response__initialize_w_params

            #define T_finalize_w_params   ur_msgs::srv::dds_::SetPayload_Response__finalize_w_params
            #define T_copy       ur_msgs::srv::dds_::SetPayload_Response__copy

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
    } /* namespace srv  */
} /* namespace ur_msgs  */

