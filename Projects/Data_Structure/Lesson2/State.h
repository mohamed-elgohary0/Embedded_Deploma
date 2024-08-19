/*
 * State.h
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#ifndef STATE_H_
#define STATE_H_

#define STATE_define(_stateFunc_) void ST_##_stateFunc_()
#define STATE(_stateFunc_) ST_##_stateFunc_

#include "stdio.h"
#include "stdlib.h"

//States Connection

void US_distance_set(int d);
void DC_motor(int s);

#endif /* STATE_H_ */
