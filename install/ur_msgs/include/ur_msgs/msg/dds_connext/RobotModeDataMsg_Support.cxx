
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RobotModeDataMsg_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "RobotModeDataMsg_Support.h"
#include "RobotModeDataMsg_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace ur_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'RobotModeDataMsg_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   RobotModeDataMsg_TYPENAME

            /* Defines */
            #define TDataWriter RobotModeDataMsg_DataWriter
            #define TData       ur_msgs::msg::dds_::RobotModeDataMsg_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   RobotModeDataMsg_TYPENAME

            /* Defines */
            #define TDataReader RobotModeDataMsg_DataReader
            #define TDataSeq    RobotModeDataMsg_Seq
            #define TData       ur_msgs::msg::dds_::RobotModeDataMsg_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    RobotModeDataMsg_TYPENAME
            #define TPlugin_new  ur_msgs::msg::dds_::RobotModeDataMsg_Plugin_new
            #define TPlugin_delete  ur_msgs::msg::dds_::RobotModeDataMsg_Plugin_delete

            /* Defines */
            #define TTypeSupport RobotModeDataMsg_TypeSupport
            #define TData        ur_msgs::msg::dds_::RobotModeDataMsg_
            #define TDataReader  RobotModeDataMsg_DataReader
            #define TDataWriter  RobotModeDataMsg_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace ur_msgs  */

