#include <Dstypes.h>

/* Variables for CAN monitoring with RTI CAN MultiMessage block set */
volatile UInt32 RTICANMM_MonitorData[18];
dsfloat RTICANMM_DataFetchTime[16]= { -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
  -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0 };

volatile UInt8 RTICANMM_MonitoringTimeStampEnable;
volatile dsfloat RTICANMM_MonitoringTimeStamp;

/* RTT RTICANMM Interface Version */
volatile UInt32 VersionNumber = 1;
