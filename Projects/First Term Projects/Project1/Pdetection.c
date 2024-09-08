/*
 * Pdetection.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */


#include "Pdetection.h"
#include "driver.h"
#include "Preader.h"
#include "Alarm_Actuator.h"

void Waiting(){
	Pressure_Reader();
	if(pVal <= threshold){
		Set_Alarm_actuator(1);
	}
	else{
		Start_Alarm();
	}
}
