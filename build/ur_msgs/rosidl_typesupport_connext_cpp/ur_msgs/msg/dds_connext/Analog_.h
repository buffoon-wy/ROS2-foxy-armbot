

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Analog_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Analog__1802833834_h
#define Analog__1802833834_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace ur_msgs {
    namespace msg {
        namespace dds_ {
            namespace Analog_Constants {
                static const DDS_Octet VOLTAGE_= 0;
                static const DDS_Octet CURRENT_= 1;
            } /* namespace Analog_Constants  */

            extern const char *Analog_TYPENAME;

            struct Analog_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Analog_TypeSupport;
            class Analog_DataWriter;
            class Analog_DataReader;
            #endif

            class Analog_ 
            {
              public:
                typedef struct Analog_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Analog_TypeSupport TypeSupport;
                typedef Analog_DataWriter DataWriter;
                typedef Analog_DataReader DataReader;
                #endif

                DDS_Octet   pin_ ;
                DDS_Octet   domain_ ;
                DDS_Float   state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Analog__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Analog_Seq, Analog_);

            NDDSUSERDllExport
            RTIBool Analog__initialize(
                Analog_* self);

            NDDSUSERDllExport
            RTIBool Analog__initialize_ex(
                Analog_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Analog__initialize_w_params(
                Analog_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Analog__finalize(
                Analog_* self);

            NDDSUSERDllExport
            void Analog__finalize_ex(
                Analog_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Analog__finalize_w_params(
                Analog_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Analog__finalize_optional_members(
                Analog_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Analog__copy(
                Analog_* dst,
                const Analog_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace ur_msgs  */

#endif /* Analog_ */

