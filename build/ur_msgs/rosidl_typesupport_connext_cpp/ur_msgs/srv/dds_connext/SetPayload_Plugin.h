

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetPayload_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetPayload_Plugin_308780456_h
#define SetPayload_Plugin_308780456_h

#include "SetPayload_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "geometry_msgs/msg/dds_connext/Vector3_Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace ur_msgs {
    namespace srv {
        namespace dds_ {

            #define SetPayload_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define SetPayload_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SetPayload_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define SetPayload_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SetPayload_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SetPayload_Request_*
            SetPayload_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SetPayload_Request_*
            SetPayload_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SetPayload_Request_*
            SetPayload_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Request_PluginSupport_copy_data(
                SetPayload_Request_ *out,
                const SetPayload_Request_ *in);

            NDDSUSERDllExport extern void 
            SetPayload_Request_PluginSupport_destroy_data_w_params(
                SetPayload_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SetPayload_Request_PluginSupport_destroy_data_ex(
                SetPayload_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SetPayload_Request_PluginSupport_destroy_data(
                SetPayload_Request_ *sample);

            NDDSUSERDllExport extern void 
            SetPayload_Request_PluginSupport_print_data(
                const SetPayload_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SetPayload_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SetPayload_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SetPayload_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SetPayload_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SetPayload_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Request_ *out,
                const SetPayload_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const SetPayload_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SetPayload_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SetPayload_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SetPayload_Request_Plugin_deserialize_from_cdr_buffer(
                SetPayload_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            SetPayload_Request_Plugin_data_to_string(
                const SetPayload_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            SetPayload_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            SetPayload_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            SetPayload_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SetPayload_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            SetPayload_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const SetPayload_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SetPayload_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SetPayload_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SetPayload_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const SetPayload_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SetPayload_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SetPayload_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            SetPayload_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ur_msgs  */
namespace ur_msgs {
    namespace srv {
        namespace dds_ {

            #define SetPayload_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define SetPayload_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SetPayload_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define SetPayload_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SetPayload_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SetPayload_Response_*
            SetPayload_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SetPayload_Response_*
            SetPayload_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SetPayload_Response_*
            SetPayload_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Response_PluginSupport_copy_data(
                SetPayload_Response_ *out,
                const SetPayload_Response_ *in);

            NDDSUSERDllExport extern void 
            SetPayload_Response_PluginSupport_destroy_data_w_params(
                SetPayload_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SetPayload_Response_PluginSupport_destroy_data_ex(
                SetPayload_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SetPayload_Response_PluginSupport_destroy_data(
                SetPayload_Response_ *sample);

            NDDSUSERDllExport extern void 
            SetPayload_Response_PluginSupport_print_data(
                const SetPayload_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SetPayload_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SetPayload_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SetPayload_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SetPayload_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SetPayload_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Response_ *out,
                const SetPayload_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const SetPayload_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SetPayload_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SetPayload_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SetPayload_Response_Plugin_deserialize_from_cdr_buffer(
                SetPayload_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            SetPayload_Response_Plugin_data_to_string(
                const SetPayload_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            SetPayload_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            SetPayload_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            SetPayload_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SetPayload_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            SetPayload_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const SetPayload_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SetPayload_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SetPayload_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SetPayload_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const SetPayload_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SetPayload_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SetPayload_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SetPayload_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SetPayload_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            SetPayload_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ur_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SetPayload_Plugin_308780456_h */

