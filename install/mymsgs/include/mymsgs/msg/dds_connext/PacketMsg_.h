

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PacketMsg_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PacketMsg__1903530057_h
#define PacketMsg__1903530057_h

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

            extern const char *PacketMsg_TYPENAME;

            struct PacketMsg_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PacketMsg_TypeSupport;
            class PacketMsg_DataWriter;
            class PacketMsg_DataReader;
            #endif

            class PacketMsg_ 
            {
              public:
                typedef struct PacketMsg_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PacketMsg_TypeSupport TypeSupport;
                typedef PacketMsg_DataWriter DataWriter;
                typedef PacketMsg_DataReader DataReader;
                #endif

                DDS_OctetSeq  buf_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PacketMsg__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PacketMsg_Seq, PacketMsg_);

            NDDSUSERDllExport
            RTIBool PacketMsg__initialize(
                PacketMsg_* self);

            NDDSUSERDllExport
            RTIBool PacketMsg__initialize_ex(
                PacketMsg_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PacketMsg__initialize_w_params(
                PacketMsg_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PacketMsg__finalize(
                PacketMsg_* self);

            NDDSUSERDllExport
            void PacketMsg__finalize_ex(
                PacketMsg_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PacketMsg__finalize_w_params(
                PacketMsg_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PacketMsg__finalize_optional_members(
                PacketMsg_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PacketMsg__copy(
                PacketMsg_* dst,
                const PacketMsg_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsgs  */

#endif /* PacketMsg_ */

