/*
 * DC.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */


#include <stdio.h>
#include <stdlib.h>
#include"DC.h"

int speed;
void (* DC_state)();

void DC_init(){
	printf("DC_init\n");
}
DC_motor(int s){
	speed =s;
	DC_state = STATE(DC_busy);
	printf("CA -----speed = %d------> DC\n", speed);
}

STATE_define(DC_idle){
	DC_state_id = DC_idle;
	printf("DC idle state : speed = %d", speed);
}
STATE_define(DC_busy){
	//state action
	DC_state_id = DC_busy;
	printf("DC_busy state : speed = %d\n", speed);
	//call DC_driver'
	DC_state = STATE(DC_idle);
}
