

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetSpeedSliderFraction_.idl using "rtiddsgen".
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

#include "SetSpeedSliderFraction_.h"

#include <new>

namespace ur_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetSpeedSliderFraction_Request_TYPENAME = "ur_msgs::srv::dds_::SetSpeedSliderFraction_Request_";

            DDS_TypeCode* SetSpeedSliderFraction_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetSpeedSliderFraction_Request__g_tc_members[1]=
                {

                    {
                        (char *)"speed_slider_fraction_",/* Member name */
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

                static DDS_TypeCode SetSpeedSliderFraction_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ur_msgs::srv::dds_::SetSpeedSliderFraction_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetSpeedSliderFraction_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetSpeedSliderFraction_Request_*/

                if (is_initialized) {
                    return &SetSpeedSliderFraction_Request__g_tc;
                }

                SetSpeedSliderFraction_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &SetSpeedSliderFraction_Request__g_tc;
            }

            RTIBool SetSpeedSliderFraction_Request__initialize(
                SetSpeedSliderFraction_Request_* sample) {
                return ur_msgs::srv::dds_::SetSpeedSliderFraction_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetSpeedSliderFraction_Request__initialize_ex(
                SetSpeedSliderFraction_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ur_msgs::srv::dds_::SetSpeedSliderFraction_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetSpeedSliderFraction_Request__initialize_w_params(
                SetSpeedSliderFraction_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->speed_slider_fraction_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void SetSpeedSliderFraction_Request__finalize(
                SetSpeedSliderFraction_Request_* sample)
            {

                ur_msgs::srv::dds_::SetSpeedSliderFraction_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetSpeedSliderFraction_Request__finalize_ex(
                SetSpeedSliderFraction_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ur_msgs::srv::dds_::SetSpeedSliderFraction_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetSpeedSliderFraction_Request__finalize_w_params(
                SetSpeedSliderFraction_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SetSpeedSliderFraction_Request__finalize_optional_members(
                SetSpeedSliderFraction_Request_* sample, RTIBool deletePointers)
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

            RTIBool SetSpeedSliderFraction_Request__copy(
                SetSpeedSliderFraction_Request_* dst,
                const SetSpeedSliderFraction_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->speed_slider_fraction_, &src->speed_slider_fraction_)) { 
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
            * Configure and implement 'SetSpeedSliderFraction_Request_' sequence class.
            */
            #define T SetSpeedSliderFraction_Request_
            #define TSeq SetSpeedSliderFraction_Request_Seq

            #define T_initialize_w_params ur_msgs::srv::dds_::SetSpeedSliderFraction_Request__initialize_w_params

            #define T_finalize_w_params   ur_msgs::srv::dds_::SetSpeedSliderFraction_Request__finalize_w_params
            #define T_copy       ur_msgs::srv::dds_::SetSpeedSliderFraction_Request__copy

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
            const char *SetSpeedSliderFraction_Response_TYPENAME = "ur_msgs::srv::dds_::SetSpeedSliderFraction_Response_";

            DDS_TypeCode* SetSpeedSliderFraction_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetSpeedSliderFraction_Response__g_tc_members[1]=
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

                static DDS_TypeCode SetSpeedSliderFraction_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ur_msgs::srv::dds_::SetSpeedSliderFraction_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetSpeedSliderFraction_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetSpeedSliderFraction_Response_*/

                if (is_initialized) {
                    return &SetSpeedSliderFraction_Response__g_tc;
                }

                SetSpeedSliderFraction_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &SetSpeedSliderFraction_Response__g_tc;
            }

            RTIBool SetSpeedSliderFraction_Response__initialize(
                SetSpeedSliderFraction_Response_* sample) {
                return ur_msgs::srv::dds_::SetSpeedSliderFraction_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetSpeedSliderFraction_Response__initialize_ex(
                SetSpeedSliderFraction_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ur_msgs::srv::dds_::SetSpeedSliderFraction_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetSpeedSliderFraction_Response__initialize_w_params(
                SetSpeedSliderFraction_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void SetSpeedSliderFraction_Response__finalize(
                SetSpeedSliderFraction_Response_* sample)
            {

                ur_msgs::srv::dds_::SetSpeedSliderFraction_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetSpeedSliderFraction_Response__finalize_ex(
                SetSpeedSliderFraction_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ur_msgs::srv::dds_::SetSpeedSliderFraction_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetSpeedSliderFraction_Response__finalize_w_params(
                SetSpeedSliderFraction_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SetSpeedSliderFraction_Response__finalize_optional_members(
                SetSpeedSliderFraction_Response_* sample, RTIBool deletePointers)
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

            RTIBool SetSpeedSliderFraction_Response__copy(
                SetSpeedSliderFraction_Response_* dst,
                const SetSpeedSliderFraction_Response_* src)
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
            * Configure and implement 'SetSpeedSliderFraction_Response_' sequence class.
            */
            #define T SetSpeedSliderFraction_Response_
            #define TSeq SetSpeedSliderFraction_Response_Seq

            #define T_initialize_w_params ur_msgs::srv::dds_::SetSpeedSliderFraction_Response__initialize_w_params

            #define T_finalize_w_params   ur_msgs::srv::dds_::SetSpeedSliderFraction_Response__finalize_w_params
            #define T_copy       ur_msgs::srv::dds_::SetSpeedSliderFraction_Response__copy

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

