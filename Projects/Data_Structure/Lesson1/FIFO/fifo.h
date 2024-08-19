/*
 * fifo.h
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */
/*
#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include <stdint.h>

//USER Configuration
//select the element type (uint8_t, uint16_t, uint32_t, ....)
#define element_type uint8_t
//creat buffer 1
#define width1 5
element_type uart_buffer[width1];

//FIFO data types

typedef struct{
	unsigned int length;
	unsigned int count;
	element_type* base;
	element_type* tail;
	element_type* head;
}FIFO_buf_t;

typedef enum {
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_Null
}FIFO_Status;

//APIs
FIFO_Status FIFO_init(FIFO_buf_t *fifo, element_type *buf, uint32_t length);
FIFO_Status FIFO_enqueue(FIFO_buf_t* fifo, element_type item);
FIFO_Status FIFO_dequeue(FIFO_buf_t* fifo, element_type* item);
FIFO_Status FIFO_IS_Full(FIFO_buf_t* fifo);
void FIFO_print(FIFO_buf_t* fifo);

#endif /* FIFO_H_ */
