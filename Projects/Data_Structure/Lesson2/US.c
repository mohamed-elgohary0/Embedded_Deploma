/*
 * US.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#include "US.h"

void (* US_state)();

int generate_rendom(int l, int r , int count);
static int distance =0;

void US_init(){
	printf("DC_init\n");
}

STATE_define(US_busy){
	//state action
	US_state_id = US_busy;
	//read ftom US
	distance = generate_rendom(45,55,1);
	printf("US_busy state: distance = %d \n", distance);

	US_distance_set(distance);
	US_state = STATE(US_busy);
}

int generate_rendom(int l, int r , int count){
	int i;
	for(i=0; i<count; i++){
		int rand_num = (rand() % (r - l + 1)) +l;
		return rand_num;
	}
}
