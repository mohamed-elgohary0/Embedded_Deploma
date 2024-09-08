/*
 * ALarm_Actuator.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#include "Alarm_Actuator.h"
#include "driver.h"
#include "Preader.h"

void Start_Alarm(){
	Set_Alarm_actuator(0);
	Delay(600000);
	Set_Alarm_actuator(1);
}
