#include "test_on_intes_cross2018_TestCase_capi_host.h"
static test_on_intes_cross2018_TestCase_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        test_on_intes_cross2018_TestCase_host_InitializeDataMapInfo(&(root), "test_on_intes_cross2018_TestCase");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
