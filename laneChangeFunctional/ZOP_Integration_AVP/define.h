#ifndef _H_DEFINE_
#define _H_DEFINE_

#include "basic_type.h"
#include <stdio.h>

/*--------------------------------- TOKENS -----------------------------------*/

#define SAVE_BGR_FOR_HMI

#ifndef EPSILON
#define EPSILON (1e-6) 
#endif

//#define _DEBUG_

//#define PLATFORM_TDA4
//#define PLATFORM_CV22
//#define PLATFORM_SIL

#if defined (PLATFORM_SIL)
#define DEBUG_PRINT printf
#elif defined (PLATFORM_TDA4)
#define DEBUG_PRINT printf
#elif defined (PLATFORM_CV22)
#define DEBUG_PRINT( ...) printf("filename: %s, function: %s, line:%d >", __FILE__, __FUNCTION__, __LINE__);\
						      printf(__VA_ARGS__);
#else
#define DEBUG_PRINT
#endif

#define PUBVOLREG volatile register         /* Allocation of storage with   */
/* data type modifier "volatile"*/
/* and storage class spec."reg."*/
#define EXTVOLREG extern volatile register  /* Reference to a global vola-  */
/* tile variable with storage   */
/* class spec. "register"       */

#define PUBFUNC                             /* Definition of a function     */
#define LOCFUNC

#define EXTFUNC   extern                    /* Reference to the orginal     */
/* function                     */
#define PUBREG    register                  /* Allocation of storage with   */
/* storage class specifier      */
/* "register"                   */
#define EXTREG    extern register           /* Reference to a global reg.-  */

/*Reference to an module-memory which is declared in the linker-command-file*/
#define EXTMOD   extern             
/* variable                     */
#define PUBCONST  const                     /* Allocation of storage with   */
/* data type modifier "const"   */
#define EXTCONST  extern const              /* Reference to a global read-  */
/* only object                  */
#define PUBLIC                              /* Allocation of storage        */

#define PUBVOL    volatile                  /* Allocation of storage with   */
/* data type modifier "vola."   */
#define EXTVOL    extern volatile           /* Reference to a global vola-  */
/* tile-variable                */
#define REGISTER  register                  /* Allocation of storage with   */
/* storage class specifier      */
/* "register"                   */
/* PRQA S 3461 -- */

#undef EXTERN

#define MAX_NUMBER_OF_OD                     (65)
#define MAX_NUMBER_OF_EACH_OB                (65)
#define MAX_NUMBER_3D_OB                     (65)
#define MAX_NUMBER_OF_CORNER                 (3000)

#define IMAGE_MIDDLE_POINT_CX                (1440)
#define IMAGE_MIDDLE_POINT_CY                (540)

#define BIG_ROI_IMAGE_WIDTH                  (1152)
#define BIG_ROI_IMAGE_HEIGHT                 (384)
#define SMALL_ROI_IMAGE_WIDTH                (1280)
#define SMALL_ROI_IMAGE_HEIGHT               (768)


//#define IMAGE_WIDTH                          (2304)
//#define IMAGE_HEIGHT                         (768)

#define IMAGE_WIDTH                          (1104)
#define IMAGE_HEIGHT                         (624)

#define BIG_ROI_CNN_CROP_X                   (IMAGE_MIDDLE_POINT_CX - BIG_ROI_IMAGE_WIDTH)
#define BIG_ROI_CNN_CROP_Y                   (IMAGE_MIDDLE_POINT_CY - BIG_ROI_IMAGE_HEIGHT)

#define VEHICLE_BOX_TYPE                     (3)
#define PED_BOX_TYPE                         (1)
#define WHEEL_BOX_TYPE                       (1)

#define IMAGE_WIDTH_QUARTER                  (SMALL_ROI_IMAGE_WIDTH/4)
#define IMAGE_HEIGHT_QUARTER                 (SMALL_ROI_IMAGE_HEIGHT/4)

#define VEHICLE_BOX_TYPE                     (3)
#define PED_BOX_TYPE                         (1)
#define WHEEL_BOX_TYPE                       (1)


#define BIG_ROI_MIDDLE_POINT_CX             (1152)
#define BIG_ROI_MIDDLE_POINT_CY             (384)
#ifdef PLATFORM_TDA4
#define SMALL_ROI_CNN_CROP_X            (0)
#define SMALL_ROI_CNN_CROP_Y            (0)
#else
#define SMALL_ROI_CNN_CROP_X            (BIG_ROI_IMAGE_WIDTH - (SMALL_ROI_IMAGE_WIDTH / 2))
#define SMALL_ROI_CNN_CROP_Y            (0)

#endif
#define VEHICLE                              (1)
#define PEDESTRIAN                           (2)
#define TWO_WHEEL                            (3)

#define TIME_INTERVAL_FRAME                  (0.045f)

#define FRAME_MARGIN_PIXELS                   (20)
#define CONF_THRESHOLD_IF_EXIST               (0.45f)
#define R_CONF_THRESHOLD_IF_EXIST             (0.35f)
#define CROSS_CONF_THRESHOLD                  (0.75f)
#define HEIGHT_OF_SMALL_OBJECT                (30)

#define IIDT_ROI1_WIDTH                       (230)
#define LEFT_LATERAL_ROI_X                    (SMALL_ROI_CNN_CROP_X + IIDT_ROI1_WIDTH)
#define RIGHT_LATERAL_ROI_X                   (SMALL_ROI_IMAGE_WIDTH + SMALL_ROI_CNN_CROP_X - IIDT_ROI1_WIDTH)

#define LEFT_1_ROI_X                          (SMALL_ROI_CNN_CROP_X - IIDT_ROI1_WIDTH)
#define RIGHT_1_ROI_X                         (SMALL_ROI_IMAGE_WIDTH + SMALL_ROI_CNN_CROP_X + IIDT_ROI1_WIDTH)

#define LC_OB_MIN_LAST_FRAMES_FOR_OUTPUT         (1)
#define HC_OB_MIN_LAST_FRAMES_FOR_OUTPUT         (1)
#define HC_OB_CONF_THRESHOLD_FOR_OUTPUT          (0.85f)
#define PI									 (3.141592653589793f)

enum ObjectType {PED,WHEEL,OTHER_CAR,PASSENGER_CAR,BUS_SMALL,BUS_BIG,TRUCK_LIGHT,TRUCK_HEAVY,VSN_CAR,TRICYCLE,UNKNOWN};

#endif // _H_DEFINE_
