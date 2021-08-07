

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Imu_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Imu__231391884_h
#define Imu__231391884_h

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

            extern const char *Imu_TYPENAME;

            struct Imu_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Imu_TypeSupport;
            class Imu_DataWriter;
            class Imu_DataReader;
            #endif

            class Imu_ 
            {
              public:
                typedef struct Imu_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Imu_TypeSupport TypeSupport;
                typedef Imu_DataWriter DataWriter;
                typedef Imu_DataReader DataReader;
                #endif

                DDS_UnsignedLong   time_boot_ms_ ;
                DDS_Short   xacc_ ;
                DDS_Short   yacc_ ;
                DDS_Short   zacc_ ;
                DDS_Short   xgyro_ ;
                DDS_Short   ygyro_ ;
                DDS_Short   zgyro_ ;
                DDS_Short   xmag_ ;
                DDS_Short   ymag_ ;
                DDS_Short   zmag_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Imu__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Imu_Seq, Imu_);

            NDDSUSERDllExport
            RTIBool Imu__initialize(
                Imu_* self);

            NDDSUSERDllExport
            RTIBool Imu__initialize_ex(
                Imu_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Imu__initialize_w_params(
                Imu_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Imu__finalize(
                Imu_* self);

            NDDSUSERDllExport
            void Imu__finalize_ex(
                Imu_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Imu__finalize_w_params(
                Imu_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Imu__finalize_optional_members(
                Imu_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Imu__copy(
                Imu_* dst,
                const Imu_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsgs  */

#endif /* Imu_ */

