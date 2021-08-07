

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Attitued_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Attitued__314900833_h
#define Attitued__314900833_h

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

            extern const char *Attitued_TYPENAME;

            struct Attitued_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Attitued_TypeSupport;
            class Attitued_DataWriter;
            class Attitued_DataReader;
            #endif

            class Attitued_ 
            {
              public:
                typedef struct Attitued_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Attitued_TypeSupport TypeSupport;
                typedef Attitued_DataWriter DataWriter;
                typedef Attitued_DataReader DataReader;
                #endif

                DDS_UnsignedLong   time_boot_ms_ ;
                DDS_Float   roll_ ;
                DDS_Float   pitch_ ;
                DDS_Float   yaw_ ;
                DDS_Float   rollspeed_ ;
                DDS_Float   pitchspeed_ ;
                DDS_Float   yawspeed_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Attitued__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Attitued_Seq, Attitued_);

            NDDSUSERDllExport
            RTIBool Attitued__initialize(
                Attitued_* self);

            NDDSUSERDllExport
            RTIBool Attitued__initialize_ex(
                Attitued_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Attitued__initialize_w_params(
                Attitued_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Attitued__finalize(
                Attitued_* self);

            NDDSUSERDllExport
            void Attitued__finalize_ex(
                Attitued_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Attitued__finalize_w_params(
                Attitued_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Attitued__finalize_optional_members(
                Attitued_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Attitued__copy(
                Attitued_* dst,
                const Attitued_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsgs  */

#endif /* Attitued_ */

