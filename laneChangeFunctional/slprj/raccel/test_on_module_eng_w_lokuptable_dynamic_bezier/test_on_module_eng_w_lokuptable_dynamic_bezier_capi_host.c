#include "test_on_module_eng_w_lokuptable_dynamic_bezier_capi_host.h"
static test_on_module_eng_w_lokuptable_dynamic_bezier_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        test_on_module_eng_w_lokuptable_dynamic_bezier_host_InitializeDataMapInfo(&(root), "test_on_module_eng_w_lokuptable_dynamic_bezier");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
