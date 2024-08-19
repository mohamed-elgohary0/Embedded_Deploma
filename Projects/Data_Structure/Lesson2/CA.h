/*
 * CA.h
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#ifndef CA_H_
#define CA_H_

#include "State.h"

enum{
	CA_waiting,
	CA_driving
}CA_state_id;

//prototype
STATE_define(CA_waiting);
STATE_define(CA_driving);
//global pointer to function
extern void (* CA_state)();

#endif /* CA_H_ */
