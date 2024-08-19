/*
 * fifo.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

/*#include "fifo.h"

//APIs
FIFO_Status FIFO_init(FIFO_buf_t* fifo,element_type* buf,uint32_t length)
{
	if(buf == NULL)
		return FIFO_Null;
	fifo->base = buf ;
	fifo->head = buf ;
	fifo->tail = buf ;
	fifo->length = length;
	fifo->count = 0 ;
	return FIFO_no_error;

}
FIFO_Status FIFO_enqueue(FIFO_buf_t* fifo, element_type item){
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null;
	//fifo is full
	if(FIFO_IS_Full(fifo) == FIFO_full)
		return FIFO_full;

	*(fifo->head) = item;
	fifo->count++;
	//circular fifo
	if(fifo->head == (fifo->base + (fifo->length * sizeof(element_type))))
		fifo->head = fifo->base;
	else
		fifo->head++;
	return FIFO_no_error;
}
FIFO_Status FIFO_dequeue(FIFO_buf_t* fifo,element_type* item){
	if(!fifo->base || !fifo->head || !fifo->tail )
		return FIFO_Null;
	//check fifo is empty?
	if(fifo->count == 0)
		return FIFO_empty;

	*item=*(fifo->tail);
	fifo->count--;
	//circular fifo
	if(fifo->tail == (fifo->base + (fifo->length * sizeof( element_type))))
		fifo->tail=fifo->base;
	else
		fifo->tail++;
	return FIFO_no_error;

FIFO_Status FIFO_IS_Full(FIFO_buf_t* fifo){
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null;
	if(fifo->count == fifo->length)
		return FIFO_full;
	else
		return FIFO_no_error;
}
void FIFO_print(FIFO_buf_t* fifo)
{
	element_type* temp;
	int i;
	if(fifo->count == 0)
	{
		printf("fifo is empty");
	}
	else
	{
		temp = fifo->tail;
		printf("\n =======fifo_print====\n");
		for(i=0;i<fifo->count;i++)
		{
			printf("\t %x \n",*temp);
			temp++;
		}
		printf("\n==================\n");
	}
}

