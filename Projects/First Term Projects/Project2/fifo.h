/*
 * fifo.h
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
#include "string.h"
#define MAX 30
#define MAXNUM_STDS 50
#define NUMBER_OFCOURSES 5
#define DPRINTF(...) {fflush(stdin);\
		fflush(stdout);\
		printf(__VA_ARGS__);\
		fflush(stdin);\
		fflush(stdout);}

struct stdinfo{
	char fstname[MAX];
	char lastname[MAX];
	unsigned int rollnum;
	float gpa;
	unsigned int courseid[NUMBER_OFCOURSES];
}std[MAXNUM_STDS];

//fifo data types
typedef struct {
	unsigned int length ;
	unsigned int count ;
	struct stdinfo* base;
	struct stdinfo* head;
	struct stdinfo* tail;
}FIFO_Buf_t;
typedef enum{
	fifo_no_error,
	fifo_full,
	fifo_empty,
	fifo_null,
	fifo_error
}FIFO_buf_status;
// APIs
FIFO_buf_status FIFO_init(FIFO_Buf_t* fifo,struct stdinfo* firststd,uint32_t length);
FIFO_buf_status FIFO_Enqueue(FIFO_Buf_t* fifo,struct stdinfo * newstd);
FIFO_buf_status FIFO_Delete(FIFO_Buf_t* fifo, struct stdinfo* stddelete, int i);
FIFO_buf_status FIFO_Check(FIFO_Buf_t* fifo, struct stdinfo* newstd);
void FIFO_print(struct stdinfo* std);
void Update_FirstName(FIFO_Buf_t* fifo, struct stdinfo* std);\
void Update_LastName(FIFO_Buf_t* fifo, struct stdinfo* std);
void Update_GPA(FIFO_Buf_t* fifo, struct stdinfo* std);
void Update_RollNum(FIFO_Buf_t* fifo, struct stdinfo* std);
void Update_courses(FIFO_Buf_t* fifo, struct stdinfo* std);
#endif /* FIFO_H_ */
