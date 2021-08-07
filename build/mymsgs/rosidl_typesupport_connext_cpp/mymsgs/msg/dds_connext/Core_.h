

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Core_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Core__415012485_h
#define Core__415012485_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mymsgs {
    namespace msg {
        namespace dds_ {

            extern const char *Core_TYPENAME;

            struct Core_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Core_TypeSupport;
            class Core_DataWriter;
            class Core_DataReader;
            #endif

            class Core_ 
            {
              public:
                typedef struct Core_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Core_TypeSupport TypeSupport;
                typedef Core_DataWriter DataWriter;
                typedef Core_DataReader DataReader;
                #endif

                DDS_UnsignedLong   time_boot_ms_ ;
                DDS_UnsignedLong   onboard_control_sensors_health_ ;
                DDS_UnsignedShort   load_ ;
                DDS_UnsignedShort   voltage_battery_ ;
                DDS_Short   current_battery_ ;
                DDS_Octet   battery_remaining_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Core__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Core_Seq, Core_);

            NDDSUSERDllExport
            RTIBool Core__initialize(
                Core_* self);

            NDDSUSERDllExport
            RTIBool Core__initialize_ex(
                Core_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Core__initialize_w_params(
                Core_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Core__finalize(
                Core_* self);

            NDDSUSERDllExport
            void Core__finalize_ex(
                Core_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Core__finalize_w_params(
                Core_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Core__finalize_optional_members(
                Core_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Core__copy(
                Core_* dst,
                const Core_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsgs  */

#endif /* Core_ */

