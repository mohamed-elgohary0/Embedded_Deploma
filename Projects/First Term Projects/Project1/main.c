/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */



#include "driver.h"
#include "Preader.h"

int main (){
	GPIO_INITIALIZATION();
	while (1)
	{
		Waiting();
		Delay(800000);
	}

}
