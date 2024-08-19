/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

/*#include "stdio.h"
#include "fifo.h"
void main(){
	FIFO_buf_t FIFO_UART;
	element_type i,temp=0;
	if(FIFO_init(&FIFO_UART, uart_buffer,  width1) == FIFO_no_error)
		printf("fifo init Done ---------\n");

	for(i=0; i<7; i++){
		printf("fifo Enqueue (%x) \n",i);
		if(FIFO_enqueue(&FIFO_UART , i)== FIFO_no_error)
			printf(" \tfifo enqueue Done ----------\n");
		else
			printf("\t fifo enqueue failed--------\n");
	}

	FIFO_print(&FIFO_UART);
	if(FIFO_dequeue(&FIFO_UART , &temp)== FIFO_no_error)
		printf("\t fifo %x dequeue Done ----------\n",temp);
	if(FIFO_dequeue(&FIFO_UART , &temp)== FIFO_no_error)
		printf("\t fifo %x dequeue Done ----------\n",temp);
	FIFO_print(&FIFO_UART);
}
