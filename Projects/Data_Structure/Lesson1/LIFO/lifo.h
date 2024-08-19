/*
 * lifo.h
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "stdio.h"
#include "stdlib.h"
#define DPRINTF(...) {fflush(stdin);\
		fflush(stdout);\
		printf(__VA_ARGS__);\
		fflush(stdin);\
		fflush(stdout);}

typedef struct{
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
}LIFO_Buf_t;

typedef enum{
	LIFO_no_error,
	LIFO_full,
	LIFO_Empty,
	LIFO_Null
}LIFO_Status;

//APIs
LIFO_Status LIFO_add_item(LIFO_Buf_t* lifo_buf , unsigned int item);
LIFO_Status LIFO_get_item(LIFO_Buf_t* lifo_buf , unsigned int* item);
LIFO_Status LIFO_init(LIFO_Buf_t* lifo_buf , unsigned int* buf, unsigned int length);

#endif /* LIFO_H_ */
