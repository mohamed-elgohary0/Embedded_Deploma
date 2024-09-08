/*
 * Preader.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */


#include "driver.h"
#include "Preader.h"

int pVal=0;

void Pressure_Reader(){
	pVal = getPressureVal();
}
