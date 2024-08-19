/*
 * CA.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#include "CA.h"

int CA_speed =0;
int CA_distance =0;
int CA_threshold =50;

//State pointer to function
void(*CA_state)();

void US_distance_set(int d){
	CA_distance = d;
	(CA_distance<= CA_threshold)? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
	printf("US --------distance=%d-----> CA ",CA_distance);
}

STATE_define(CA_waiting){
	CA_state_id = CA_waiting;
	printf("CA_waiting state: distance = %d speed = %d \n", CA_distance, CA_speed);

	//speed action

	CA_speed = 0;
	DC_motor(CA_speed);
}

STATE_define(CA_driving){
	CA_state_id = CA_driving;
	printf("CA_driving state: distance = %d speed = %d \n", CA_distance, CA_speed);

	//speed action

	CA_speed = 30;
	DC_motor(CA_speed);
}
