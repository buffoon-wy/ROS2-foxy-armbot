

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Control_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Control__1460733997_h
#define Control__1460733997_h

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

            extern const char *Control_TYPENAME;

            struct Control_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Control_TypeSupport;
            class Control_DataWriter;
            class Control_DataReader;
            #endif

            class Control_ 
            {
              public:
                typedef struct Control_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Control_TypeSupport TypeSupport;
                typedef Control_DataWriter DataWriter;
                typedef Control_DataReader DataReader;
                #endif

                DDS_UnsignedShort   gpio_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Control__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Control_Seq, Control_);

            NDDSUSERDllExport
            RTIBool Control__initialize(
                Control_* self);

            NDDSUSERDllExport
            RTIBool Control__initialize_ex(
                Control_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Control__initialize_w_params(
                Control_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Control__finalize(
                Control_* self);

            NDDSUSERDllExport
            void Control__finalize_ex(
                Control_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Control__finalize_w_params(
                Control_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Control__finalize_optional_members(
                Control_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Control__copy(
                Control_* dst,
                const Control_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsgs  */

#endif /* Control_ */

