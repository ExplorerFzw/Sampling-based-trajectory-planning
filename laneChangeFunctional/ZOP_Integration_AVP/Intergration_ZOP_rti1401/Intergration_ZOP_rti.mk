# =============================================================================
#  Make include file Intergration_ZOP_rti.mk:
#
#   RTI1401 7.12 (02-May-2019)
#   Wed Mar 17 16:07:06 2021
#
#   Copyright 2019, dSPACE GmbH. All rights reserved.
# =============================================================================

# Initialize variables used in blockset makefiles -----------------------------

BLOCKSET_LIBS     :=
BLOCKSET_SRCS     :=
BLOCKSET_INCLUDES :=

# Default rules for additional blocksets --------------------------------------

blockset_init          :
blockset_clean         :
blockset_deps          :
blockset_after_linkage :

# Includes for additional blocksets -------------------------------------------

%include "$(DSPACE_ROOT)\matlab\rtican\c\rtican.mk"


# Model-specific options ------------------------------------------------------

# Additional C source files declared by the model
MDL_CUSTOM_C_SRCS = rti_assert.c DsBusCustomCode.c DsBusCustomCode_SecOC.c rtican_err1.c

# Additional assembler source files declared by the model
MDL_CUSTOM_ASM_SRCS =

# Additional libraries declared by the model
MDL_CUSTOM_LIBS = \
  "$(DSPACE_ROOT)\DS1401\RTPython\dsrtt1401.lib"

# Additional objects declared by the model
MDL_CUSTOM_OBJS =

# Directories where additional C and assembler source files are stored
MDL_CUSTOM_SRCS_DIR = \
  "$(DSPACE_ROOT)\BusImplementationSoftware\BusCustomCode"

# Directories where additional header files are stored
MDL_CUSTOM_INCLUDES_PATH = \
  "$(DSPACE_ROOT)\DS1401\RTPython" \
  "$(DSPACE_ROOT)\BusImplementationSoftware\BusCustomCode"

# Dependencies declared by the model
Intergration_ZOP.$(OBJ_EXT) :"rtican_include.h" 

# Define build type information
BUILDTYPE = RTI

# EOF -------------------------------------------------------------------------
