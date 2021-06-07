/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : logger.h
* Description   :
* Version       : v1.0
* Create Time   : 2020/10/22
* Author   		: meepo
* Modify history:
*******************************************************************************
* Modify Time   Modify person  Modification
* ------------------------------------------------------------------------------
*
*******************************************************************************/
#ifndef __H_LOGGER__
#define __H_LOGGER__

#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */

/************************** Macro *********************************************/
#define ZONE_LOG_PRINT_COLOR_NONE                 "\033[m"
#define ZONE_LOG_PRINT_COLOR_DEBUG_WHITE          "\033[1;37m"
#define ZONE_LOG_PRINT_COLOR_INFO_GREEN           "\033[0;32;32m"
#define ZONE_LOG_PRINT_COLOR_WARN_YELLOW          "\033[1;33m"
#define ZONE_LOG_PRINT_COLOR_ERROR_RED            "\033[0;32;31m"

#define  __DEBUG

#ifdef __DEBUG
#define  MY_PRINTF(format, ...) printf(format, ##__VA_ARGS__)
#else
#define MY_PRINTF(format, ...)
#endif

#define DEBUG_PRINT printf

typedef enum {
    LOG_LEVEL_OFF,
    LOG_LEVEL_FATAL,
    LOG_LEVEL_ERROR,
    LOG_LEVEL_WARN,
    LOG_LEVEL_INFO,
    LOG_LEVEL_DEBUG,
}LOG_LEVEL;

#define logger LOG_LEVEL_DEBUG

#define LOG_LVL LOG_LEVEL_DEBUG

#define ZONE_FATAL(format, ...)\
    do {\
        if(logger>=LOG_LEVEL_FATAL)\
            MY_PRINTF("\033[0;35m[ FATAL ] @ FUNC:%s FILE:%s LINE:%d " format "\033[0;0m\n",\
                    __func__, __FILE__, __LINE__, ##__VA_ARGS__ );\
    }while(0)\

#define ZONE_ERROR(format, ...)\
    do {\
        if(logger>=LOG_LEVEL_ERROR)\
            MY_PRINTF("\033[0;31m[ ERR ] @ FUNC:%s FILE:%s LINE:%d " format "\033[0;0m\n",\
                    __func__, __FILE__, __LINE__, ##__VA_ARGS__ );\
    }while(0)\

#define ZONE_WARN(format, ...)\
    do {\
        if(logger>=LOG_LEVEL_WARN)\
            MY_PRINTF("\033[0;33m[ WARN ] @ FUNC:%s " format "\033[0;0m\n", __func__,  ##__VA_ARGS__ );\
    }while(0)\

#define ZONE_INFO(format, ...)\
    do {\
        if(logger>=LOG_LEVEL_INFO)\
            MY_PRINTF("\033[0;34m[ INFO ] " format "\033[0;0m\n", ##__VA_ARGS__ );\
    }while(0)\

#define ZONE_DEBUG(format, ...)\
    do {\
        if(logger>=LOG_LEVEL_DEBUG)\
            MY_PRINTF("\033[0;32m[ DEBUG ] " format "\033[0;0m\n", ##__VA_ARGS__ );\
    }while(0)\

#define ZONE_Assert(y)   do{if(!(y)){while(1) {ZONE_ERROR("NULL", "Assert Line:%d in %s:%s\r\n", __LINE__, __FILE__,__FUNCTION__);}}}while(0)

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_LOGGER__  */

