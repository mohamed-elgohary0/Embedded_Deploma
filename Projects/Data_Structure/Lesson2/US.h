/*
 * US.h
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#ifndef US_H_
#define US_H_

#include "state.h"

enum{
	US_busy
}US_state_id;


//prototypes
void US_init();
STATE_define(US_busy);
//global pointer to function
extern void (* US_state)();
#endif /* US_H_ */
