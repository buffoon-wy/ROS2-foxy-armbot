

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Twis_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Twis__1813847975_h
#define Twis__1813847975_h

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

            extern const char *Twis_TYPENAME;

            struct Twis_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Twis_TypeSupport;
            class Twis_DataWriter;
            class Twis_DataReader;
            #endif

            class Twis_ 
            {
              public:
                typedef struct Twis_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Twis_TypeSupport TypeSupport;
                typedef Twis_DataWriter DataWriter;
                typedef Twis_DataReader DataReader;
                #endif

                DDS_UnsignedLong   time_boot_ms_ ;
                DDS_Double   vx_ ;
                DDS_Double   vy_ ;
                DDS_Double   vz_ ;
                DDS_Double   wx_ ;
                DDS_Double   wy_ ;
                DDS_Double   wz_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Twis__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Twis_Seq, Twis_);

            NDDSUSERDllExport
            RTIBool Twis__initialize(
                Twis_* self);

            NDDSUSERDllExport
            RTIBool Twis__initialize_ex(
                Twis_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Twis__initialize_w_params(
                Twis_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Twis__finalize(
                Twis_* self);

            NDDSUSERDllExport
            void Twis__finalize_ex(
                Twis_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Twis__finalize_w_params(
                Twis_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Twis__finalize_optional_members(
                Twis_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Twis__copy(
                Twis_* dst,
                const Twis_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsgs  */

#endif /* Twis_ */

