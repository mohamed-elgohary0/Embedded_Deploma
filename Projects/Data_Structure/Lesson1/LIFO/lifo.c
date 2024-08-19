/*
 * lifo.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#include "lifo.h"

LIFO_Status LIFO_add_item(LIFO_Buf_t* lifo_buf , unsigned int item){
	//check lifo is valid?
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_Null;
	//check lifo is full?
	if(lifo_buf->count == lifo_buf->length)
		return LIFO_full;

	//add value
	*(lifo_buf->head) = item;
	lifo_buf->head ++;
	lifo_buf->count++;
	return LIFO_no_error;
}
LIFO_Status LIFO_get_item(LIFO_Buf_t* lifo_buf , unsigned int* item){
	//check lifo is valid?
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_Null;
	//check lifo is empty?
	if(lifo_buf->count == 0)
		return LIFO_Empty;
	lifo_buf->head--;
	*item = *(lifo_buf->head);
	lifo_buf->count--;
	return LIFO_no_error;
}
LIFO_Status LIFO_init(LIFO_Buf_t* lifo_buf , unsigned int* buff, unsigned int length){
	if(buff == NULL)
		return LIFO_Null;
	lifo_buf ->base = buff;
	lifo_buf ->head = buff;
	lifo_buf ->length = length;
	lifo_buf ->count = 0;
	return LIFO_no_error;
}

