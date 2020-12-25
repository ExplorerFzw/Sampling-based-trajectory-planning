# Copyright 1994-2019 The MathWorks, Inc.
#
# File    : raccel_vcx64.tmf   
#
# Abstract:
#       Template makefile for building a PC-based "rapid acceleration" 
#       executable from the generated C code for a Simulink model using
#       generated C code and the
#               Microsoft Visual C/C++ compiler version 8.0 for x64
#
#       Note that this template is automatically customized by the build 
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#
#         OPT_OPTS       - Optimization option. See DEFAULT_OPT_OPTS in
#                          vctools.mak for default.
#         OPTS           - User specific options.
#         CPP_OPTS       - C++ compiler options.
#         USER_SRCS      - Additional user sources, such as files needed by
#                          S-functions.
#         USER_INCLUDES  - Additional include paths
#                          (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#
#       To enable debugging:
#         set DEBUG_BUILD = 1, which will trigger OPTS=-Zi (may vary with
#                               compiler version, see compiler doc) 
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see raccel.tlc

#------------------------ Macros read by make_rtw -----------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = nmake
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = raccel.tlc
BUILD_SUCCESS	= *** Created

# Opt in to simplified format by specifying compatible Toolchain
TOOLCHAIN_NAME = [\
    "Microsoft Visual C++ 2019 v16.0 | nmake (64-bit Windows)", \
    "Microsoft Visual C++ 2017 v15.0 | nmake (64-bit Windows)", \
    "Microsoft Visual C++ 2015 v14.0 | nmake (64-bit Windows)"]

#---------------------- Tokens expanded by make_rtw ---------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  BUILDARGS           - Options passed in at the command line.

MODEL                  = test_on_module_eng_w_lokuptable_dynamic_bezier
MODULES                = rt_logging.c rtGetInf.c rtGetNaN.c rt_nonfinite.c test_on_module_eng_w_lokuptable_dynamic_bezier.c test_on_module_eng_w_lokuptable_dynamic_bezier_capi.c test_on_module_eng_w_lokuptable_dynamic_bezier_data.c test_on_module_eng_w_lokuptable_dynamic_bezier_tgtconn.c rt_logging_mmi.c rtw_modelmap_utils.c raccel_main_new.c raccel_sup.c raccel_mat.c simulink_solver_api.c raccel_utils.c common_utils.c ext_svr.c updown.c ext_work.c rtiostream_interface.c rtiostream_tcpip.c rtiostream_utils.c
MAKEFILE               = test_on_module_eng_w_lokuptable_dynamic_bezier.mk
MATLAB_ROOT            = D:\Matlab2019bSW
ALT_MATLAB_ROOT        = D:\MATLAB~1
MATLAB_BIN             = D:\Matlab2019bSW\bin
ALT_MATLAB_BIN         = D:\MATLAB~1\bin
MASTER_ANCHOR_DIR      = 
START_DIR              = E:\jiangyunchengGit\laneChangeFunctional
S_FUNCTIONS_LIB        = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwcoder_target_services.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwcoder_ParamTuningTgtAppSvc.lib
BUILDARGS              =  RSIM_SOLVER_SELECTION=2 EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 MODELREF_TARGET_TYPE=NONE ISPROTECTINGMODEL=NOTPROTECTING OPTS="-DTGTCONN -DON_TARGET_WAIT_FOR_START=0"
RSIM_PARAMETER_LOADING = 1
ENABLE_SLEXEC_SSBRIDGE = 1
VISUAL_VER             = 16.0

SOLVER              = 
PCMATLABROOT        = D:\\Matlab2019bSW

MODELREFS            = 

OPTIMIZATION_FLAGS   = /DNDEBUG /Od /Oy-
ADDITIONAL_LDFLAGS   = 
DEFINES_CUSTOM       = -DEXT_MODE -DIS_RAPID_ACCEL 
SYSTEM_LIBS          = /LIBPATH:"D:\Matlab2019bSW\extern\lib\win64\microsoft" libmwipp.lib libut.lib libmx.lib libmex.lib libmat.lib libmwmathutil.lib libmwslexec_simbridge.lib libmwsl_fileio.lib libmwsigstream.lib libmwsl_AsyncioQueue.lib libmwsl_services.lib libmwsdi_raccel.lib libmwi18n.lib libmwsl_simtarget_instrumentation.lib libfixedpoint.lib libmwslexec_simlog.lib

MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
# To enable debugging:
# set DEBUG_BUILD = 1
DEBUG_BUILD             = 0

#--------------------------- Model and reference models -----------------------
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = test_on_module_eng_w_lokuptable_dynamic_bezier_ref.rsp
COMPILER_COMMAND_FILE     = test_on_module_eng_w_lokuptable_dynamic_bezier_comp.rsp
RELATIVE_PATH_TO_ANCHOR   = ..\..\..
GLOBAL_TIMING_ENGINE      = 0

!if "$(MATLAB_ROOT)" != "$(ALT_MATLAB_ROOT)"
MATLAB_ROOT = $(ALT_MATLAB_ROOT)
!endif
!if "$(MATLAB_BIN)" != "$(ALT_MATLAB_BIN)"
MATLAB_BIN = $(ALT_MATLAB_BIN)
!endif
MATLAB_ARCH_BIN = $(MATLAB_BIN)\win64

#---------------------------Solver---------------------------------------------

RSIM_WITH_SL_SOLVER = 1

#--------------------------- Tool Specifications ------------------------------
!include $(MATLAB_ROOT)\rtw\c\tools\vctools.mak

CMD_FILE             = $(MODEL).rsp

#------------------------------ Include Path ----------------------------------

# Additional includes


INCLUDE = .;$(RELATIVE_PATH_TO_ANCHOR);$(BUILDINFO_INCLUDES);$(INCLUDE)

#----------------------------- Parameter Tuning -------------------------------
PARAM_CC_OPTS = -DRSIM_PARAMETER_LOADING

#----------------- Compiler and Linker Options --------------------------------

# Optimization Options
OPT_OPTS = $(DEFAULT_OPT_OPTS)

# General User Options
!if "$(DEBUG_BUILD)" == "0"
DBG_FLAG =
!else
#   Set OPT_OPTS=-Zi and any additional flags for debugging
DBG_FLAG = -Zi
!endif

!if "$(OPTIMIZATION_FLAGS)" != ""
CC_OPTS = $(OPTS)  $(OPTIMIZATION_FLAGS)
!else
CC_OPTS = $(OPT_OPTS) $(OPTS) 
!endif


CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DHAVESTDIO

CPP_REQ_DEFINES = $(CPP_REQ_DEFINES) -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

CPP_REQ_DEFINES = $(CPP_REQ_DEFINES) \
                  -DNRT -DRSIM_WITH_SL_SOLVER

!if "$(ENABLE_SLEXEC_SSBRIDGE)" != "0"
CPP_REQ_DEFINES = $(CPP_REQ_DEFINES) -DENABLE_SLEXEC_SSBRIDGE=$(ENABLE_SLEXEC_SSBRIDGE)
!endif

# Uncomment this line to move warning level to W4
# cflags = $(cflags:W3=W4)
CFLAGS   = $(cflags) @$(COMPILER_COMMAND_FILE) $(cvarsdll) $(PARAM_CC_OPTS) /wd4996 \
	   $(DBG_FLAG) $(CC_OPTS) $(DEFINES_CUSTOM) $(CPP_REQ_DEFINES) \
	   $(USER_INCLUDES)
CPPFLAGS = $(cflags) @$(COMPILER_COMMAND_FILE) $(cvarsdll) $(PARAM_CC_OPTS) \
	   /wd4996 /EHsc- $(DBG_FLAG) $(CPP_OPTS) $(CC_OPTS) $(DEFINES_CUSTOM) \
	   $(CPP_REQ_DEFINES) $(USER_INCLUDES)
LDFLAGS  = $(ldebug) $(conflags) $(conlibs) $(ADDITIONAL_LDFLAGS)

#----------------------------- Source Files -----------------------------------

#Standalone executable
PRODUCT   = $(MODEL).exe	
BUILD_PRODUCT_TYPE = executable
REQ_SRCS  = $(MODULES)

USER_SRCS =

SRCS = $(REQ_SRCS) $(USER_SRCS)

OBJS_CPP_UPPER = $(SRCS:.CPP=.obj)
OBJS_CPP_LOWER = $(OBJS_CPP_UPPER:.cpp=.obj)
OBJS_C_UPPER = $(OBJS_CPP_LOWER:.C=.obj)
OBJS = $(OBJS_C_UPPER:.c=.obj)

# ------------------------- Additional Libraries ------------------------------

LIBS =


LIBMWIPP = $(MATLAB_ROOT)\lib\win64\libmwipp.lib
LIBS = $(LIBS) $(LIBMWIPP)

#--------------------------------- Rules --------------------------------------
all: set_environment_variables $(PRODUCT)

#--- Stand-alone model ---
$(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	$(LD) $(LDFLAGS) $(S_FUNCTIONS_LIB) $(LIBS) $(SYSTEM_LIBS) \
		@$(CMD_FILE) @$(MODELREF_LINK_RSPFILE) -out:$@
	@cmd /C "echo $(BUILD_SUCCESS) $(BUILD_PRODUCT_TYPE): $@"

{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\simulink\src}.c.obj :
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\ext_mode\common}.c.obj :
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\rtiostreamtcpip}.c.obj :
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils}.c.obj :
	$(CC) $(CFLAGS) $<

rt_logging.obj : D:\Matlab2019bSW\rtw\c\src\rt_logging.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\rtw\c\src\rt_logging.c

raccel_main_new.obj : D:\Matlab2019bSW\rtw\c\raccel\raccel_main_new.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\rtw\c\raccel\raccel_main_new.c

raccel_sup.obj : D:\Matlab2019bSW\rtw\c\raccel\raccel_sup.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\rtw\c\raccel\raccel_sup.c

raccel_mat.obj : D:\Matlab2019bSW\rtw\c\raccel\raccel_mat.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\rtw\c\raccel\raccel_mat.c

simulink_solver_api.obj : D:\Matlab2019bSW\simulink\include\simulink_solver_api.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\simulink\include\simulink_solver_api.c

raccel_utils.obj : D:\Matlab2019bSW\rtw\c\src\rapid\raccel_utils.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\rtw\c\src\rapid\raccel_utils.c

common_utils.obj : D:\Matlab2019bSW\rtw\c\src\rapid\common_utils.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\rtw\c\src\rapid\common_utils.c

ext_svr.obj : D:\Matlab2019bSW\rtw\c\src\ext_mode\common\ext_svr.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\rtw\c\src\ext_mode\common\ext_svr.c

updown.obj : D:\Matlab2019bSW\rtw\c\src\ext_mode\common\updown.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\rtw\c\src\ext_mode\common\updown.c

ext_work.obj : D:\Matlab2019bSW\rtw\c\src\ext_mode\common\ext_work.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\rtw\c\src\ext_mode\common\ext_work.c

rtiostream_interface.obj : D:\Matlab2019bSW\rtw\c\src\ext_mode\common\rtiostream_interface.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\rtw\c\src\ext_mode\common\rtiostream_interface.c

rtiostream_tcpip.obj : D:\Matlab2019bSW\toolbox\coder\rtiostream\src\rtiostreamtcpip\rtiostream_tcpip.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\toolbox\coder\rtiostream\src\rtiostreamtcpip\rtiostream_tcpip.c

rtiostream_utils.obj : D:\Matlab2019bSW\toolbox\coder\rtiostream\src\utils\rtiostream_utils.c
	$(CC) $(CFLAGS) D:\Matlab2019bSW\toolbox\coder\rtiostream\src\utils\rtiostream_utils.c



{$(MATLAB_ROOT)\rtw\c\src}.cpp.obj :
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\ext_mode\common}.cpp.obj :
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\rtiostreamtcpip}.cpp.obj :
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils}.cpp.obj :
	$(CC) $(CPPFLAGS) $<



# Put these rule last, otherwise nmake will check toolboxes first

{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	$(CC) $(CPPFLAGS) $<

.cpp.obj :
	$(CC) $(CPPFLAGS) $<

{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	$(CC) $(CFLAGS) $<

.c.obj :
	$(CC) $(CFLAGS) $<

set_environment_variables:
	@set INCLUDE=$(INCLUDE)
	@set LIB=$(LIB)


# Libraries:





#----------------------------- Dependencies -----------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw
