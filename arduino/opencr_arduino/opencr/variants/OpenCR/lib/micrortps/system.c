/*
 * system.c
 *
 *  Created on: Mar 21, 2018
 *      Author: Kei
 */


#include <time.h>
#include "ddsxrce_transport_common.h"
#include "hw.h"


extern int clock_gettime(clockid_t clk_id, struct timespec *tp)
{
  tp->tv_sec = millis()/1000;
  tp->tv_sec = 0;

  return 1;
}
