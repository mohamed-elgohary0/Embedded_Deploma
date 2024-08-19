/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#include "lifo.h"

unsigned int buffer1 [5];
void main(){
	int i,j;
	unsigned int temp =0;
	LIFO_Buf_t uart_lifo, i2c_lifo;
	//static allocation
	LIFO_init(&uart_lifo, buffer1, 5);
	//dynamic allocation
	unsigned int* buffer2 = (unsigned int*) malloc (5* sizeof(unsigned int));
	LIFO_init(&i2c_lifo, buffer2, 5);
	for(i=0; i<5; i++){
		if(LIFO_add_item(&uart_lifo, i) == LIFO_no_error)
			printf("UART LIFO add: %d\n", i);
	}
	for(j=0; j<5; j++){
		if(LIFO_get_item(&uart_lifo, &temp) == LIFO_no_error)
			printf("UART LIFO get: %d\n", temp);
	}
}
