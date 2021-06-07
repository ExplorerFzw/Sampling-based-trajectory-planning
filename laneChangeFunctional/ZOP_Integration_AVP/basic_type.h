/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : basic_type.h
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

#ifndef __H_BASIC_TYPE__
#define __H_BASIC_TYPE__

/*******************************************************************************
*  INCLUDE FILES
*******************************************************************************
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#if !(defined(_COMMON_BASIC_TYPES_H_))
typedef signed char         sint8;
typedef unsigned char       uint8;
typedef signed short        sint16;
typedef unsigned short      uint16;
typedef signed int          sint32;
typedef unsigned int        uint32;
typedef signed long long    sint64;
typedef unsigned long long  uint64;
typedef float               float32;
typedef double              float64;

/*******************************************************************************
*  Defines
*******************************************************************************
*/
typedef enum
{
	ZONE_RETURN_OK = 0,
	ZONE_RETURN_ERR = -1,
	ZONE_ETIMEOUT = -2,
	ZONE_EINTR = -3,
	ZONE_INVALID_PARAM = -4,
	ZONE_TIME_OUT = -5,
	ZONE_CHECK_ERR = -6,
	ZONE_NOT_INITIALIZED = -7,
}FT_ERROR_DEFINE;

typedef signed char        int8_t;
typedef unsigned char      uint8_t;
typedef signed short       int16_t;
typedef unsigned short     uint16_t;
typedef signed int         int32_t;
typedef unsigned int       uint32_t;
typedef signed long long   int64_lt;
typedef unsigned long long uint64_lt;
typedef char               char_t;
typedef float              float32_t;
typedef double             float64_t;

#ifndef VOID
#define VOID   void /* Data type specifier "void"   */
#endif
#ifndef BOOL
#define BOOL   bool
#endif
#ifndef CONST
#define CONST  const
#endif
#ifndef TRUE
#define TRUE	true
#endif
#ifndef FALSE
#define	FALSE	false
#endif

//typedef unsigned char       boolean;

/*------------------------------- CONSTANTS ----------------------------------*/

/* min-max-constants for integer data types */
#ifndef UINT8_MAX
#define UINT8_MAX    ((UB)255)
#endif
#ifndef SINT8_MAX
#define SINT8_MAX    ((SB)127)
#endif
#ifndef SINT8_MIN
#define SINT8_MIN    ((SB)-128)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX    ((UW)65535)
#endif
#ifndef UINT16_MIN
#define UINT16_MIN    ((UW)0)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX    (0xffffffffUL)
#endif
#ifndef UINT32_MIN
#define UINT32_MIN    ((UL)0)
#endif
#ifndef SINT16_MAX
#define SINT16_MAX    ((SW)32767)
#endif
#ifndef SINT16_MIN
#define SINT16_MIN    ((SW)-32768)
#endif
#ifndef SINT32_MAX
#define SINT32_MAX    ((SL)2147483647L)
#endif
#ifndef SINT32_MIN
#define SINT32_MIN    ((SL)(-2147483647L - 1))
#endif
#ifndef FLOAT32_MAX
#define FLOAT32_MAX	   ((F)3.402823466e+38)
#endif
#ifndef FLOAT32_MIN
#define FLOAT32_MIN	   ((F)-3.402823466e+38)
#endif
#ifndef FLOAT_ZERO
#define FLOAT_ZERO     (0.000001f)
#endif


typedef uint8    UB;                         /* unsigned byte object         */
#if !defined (TDA2XX_BUILD) && !defined (TDA2XX_FAMILY_BUILD)
typedef sint8    SB;                         /* signed byte object           */
#endif
typedef uint16   UW;                         /* unsigned word object         */
typedef sint16   SW;                         /* signed word object           */
typedef uint64   UL;                         /* unsigned double word object  */
typedef sint64   SL;                         /* signed double word object    */
typedef float32  F;                          /* single-precision object      */


#ifndef NULL
#define NULL   (0)
#endif

#ifndef PTR_INVALID
#define PTR_INVALID NULL
#endif

#ifndef NULL_POINTER
#define NULL_POINTER(type) ((type *) PTR_INVALID)
#endif

#ifndef VOID
#define VOID   void                      /* Data type specifier "void"   */
#endif

#endif /* _COMMON_BASIC_TYPES_H_ */

#define ZONE_MIN(x, y)                   (((x) > (y)) ? (y) : (x))
#define ZONE_MAX(x, y)                   (((x) < (y)) ? (y) : (x))


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif //__H_BASIC_TYPE__

