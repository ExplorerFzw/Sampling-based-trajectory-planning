
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 7
#define y_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void CheckSum_0x242_Outputs_wrapper(const uint8_T *data,
			const uint8_T *length,
			uint8_T *u8_crc8)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
u8_crc8[0] = 0xFF;
int u8_poly = 0x1D;

for (int i = 0; i < length[0]; ++i)
	{
		u8_crc8[0] ^= data[i];

		for (int j = 0; j < 8; ++j)
		{
			if (u8_crc8[0] & 0x80)
			{
				u8_crc8[0] = (u8_crc8[0] << 1) ^ u8_poly;
			}
			else
			{
				u8_crc8[0] <<= 1;
			}
		}
	}

	u8_crc8[0] ^=(int)0xFF;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


