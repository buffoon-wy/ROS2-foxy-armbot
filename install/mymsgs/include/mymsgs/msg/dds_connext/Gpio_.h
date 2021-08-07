

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Gpio_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Gpio__111665130_h
#define Gpio__111665130_h

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

            extern const char *Gpio_TYPENAME;

            struct Gpio_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Gpio_TypeSupport;
            class Gpio_DataWriter;
            class Gpio_DataReader;
            #endif

            class Gpio_ 
            {
              public:
                typedef struct Gpio_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Gpio_TypeSupport TypeSupport;
                typedef Gpio_DataWriter DataWriter;
                typedef Gpio_DataReader DataReader;
                #endif

                DDS_UnsignedLong   time_boot_ms_ ;
                DDS_UnsignedLong   output_ ;
                DDS_UnsignedLong   input_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Gpio__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Gpio_Seq, Gpio_);

            NDDSUSERDllExport
            RTIBool Gpio__initialize(
                Gpio_* self);

            NDDSUSERDllExport
            RTIBool Gpio__initialize_ex(
                Gpio_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Gpio__initialize_w_params(
                Gpio_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Gpio__finalize(
                Gpio_* self);

            NDDSUSERDllExport
            void Gpio__finalize_ex(
                Gpio_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Gpio__finalize_w_params(
                Gpio_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Gpio__finalize_optional_members(
                Gpio_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Gpio__copy(
                Gpio_* dst,
                const Gpio_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsgs  */

#endif /* Gpio_ */

