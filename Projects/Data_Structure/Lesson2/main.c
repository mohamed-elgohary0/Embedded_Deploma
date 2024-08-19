/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */
#include "CA.h"
#include "US.h"
#include "DC.h"

void Setup()
{

	US_init();
	DC_init();
	//Set State pointer for each block
	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_idle);
}
int main()
{
	Setup();

	while(1)
	{
		/* Call state for each block */
		US_state();
		CA_state();
		DC_state();

	}
	return 0;
}

