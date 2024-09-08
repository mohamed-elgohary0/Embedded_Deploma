/*
 * fifo.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */


#include "fifo.h"

int i;
FIFO_buf_status FIFO_init(FIFO_Buf_t* fifo,struct stdinfo* firststd,uint32_t length)
{
	if(firststd == NULL)
		return fifo_null;
	fifo->base = firststd ;
	fifo->head = firststd ;
	fifo->tail = firststd ;
	fifo->length = length;
	fifo->count = 0 ;
	return fifo_no_error;

}
FIFO_buf_status FIFO_Enqueue(FIFO_Buf_t* fifo,struct stdinfo * newstd)
{
	if(FIFO_Check(fifo,newstd) == fifo_error)
		return fifo_error;
	fifo->head->gpa =newstd->gpa;
	fifo->head->rollnum =newstd->rollnum;
	strcpy(fifo->head->fstname, newstd->fstname);
	strcpy(fifo->head->lastname, newstd->lastname);
	for(i=0; i<5; i++){
		fifo->head->courseid[i] = newstd->courseid[i];
	}
	fifo->count++;
	// circular fifo
	if(fifo->head == (fifo->base + (fifo->length * sizeof( struct stdinfo))))
		fifo->head=fifo->base;
	else
		fifo->head++;
	return fifo_no_error;

}
FIFO_buf_status FIFO_Delete(FIFO_Buf_t* fifo, struct stdinfo* stddelete, int i)
{
	int j = i;
	int k;
	struct stdinfo* temp = stddelete +1;
	for(j=i; j< fifo->count-1; j++){
		if(stddelete==(struct stdinfo *)fifo->base+(fifo->length*sizeof(struct stdinfo)))
		{
			stddelete=fifo->base;
		}
		if(temp==(struct stdinfo *)fifo->base+(fifo->length*sizeof(struct stdinfo)))
		{
			temp=fifo->base;
		}
		stddelete->gpa = temp->gpa;
		stddelete->rollnum = temp->rollnum;
		strcpy(stddelete->fstname, temp->fstname);
		strcpy(stddelete->lastname, temp->lastname);
		for(k=0; k<5; k++){
			stddelete->courseid[i] = temp->courseid[i];
		}
		stddelete++;
		temp++;
	}
	fifo->count--;
	fifo->head--;
	return fifo_no_error;
}
FIFO_buf_status FIFO_Check(FIFO_Buf_t* fifo, struct stdinfo* newstd){
	struct stdinfo* checkstd = fifo->base;
	for(i=0; i<fifo->count; i++){
		if(newstd->rollnum == checkstd->rollnum){
			return fifo_error;
		}
		checkstd++;
	}
	return fifo_no_error;
}
void FIFO_print(struct stdinfo* std)
{
	int i;
	DPRINTF("[INFO]	student first name: %s\n", std->fstname);
	DPRINTF("[INFO]	student last name: %s\n", std->lastname);
	DPRINTF("[INFO]	student GPA: %.2f\n", std->gpa);
	DPRINTF("[INFO]	student roll number: %d\n", std->rollnum);
	DPRINTF("[INFO]	student course id:\n");
	DPRINTF("[INFO]	")
	for(i=0; i<5; i++){
		DPRINTF("Course id[%d] = %d ", i+1, std->courseid[i]);
	}
	DPRINTF("\n");
}
void Update_FirstName(FIFO_Buf_t* fifo, struct stdinfo* std){
	char firstname[MAX];
	DPRINTF("Enter the new first name: ");
	fflush(stdout);
	gets(firstname);
	strcpy(std->fstname, firstname);
	DPRINTF("[INFO] Update finished Successfully\n");
}
void Update_LastName(FIFO_Buf_t* fifo, struct stdinfo* std){
	char lastname[MAX];
	DPRINTF("Enter the new last name: ");
	fflush(stdout);
	gets(lastname);
	strcpy(std->lastname, lastname);
	DPRINTF("[INFO] Update finished Successfully\n");
}
void Update_GPA(FIFO_Buf_t* fifo, struct stdinfo* std){
	float gpa;
	DPRINTF("Enter the new GPA: ");
	fflush(stdout);
	scanf("%f", &gpa);
	std->gpa = gpa;
	DPRINTF("[INFO] Update finished Successfully\n");
}
void Update_RollNum(FIFO_Buf_t* fifo, struct stdinfo* std){
	int rollnum;
	DPRINTF("Enter the new roll number: ");
	fflush(stdout);
	scanf("%d", &rollnum);
	std->rollnum = rollnum;
	DPRINTF("[INFO] Update finished Successfully\n");
}
void Update_courses(FIFO_Buf_t* fifo, struct stdinfo* std){
	unsigned int courseid[5], i;
	DPRINTF("Enter the new ID courses: ");
	fflush(stdout);
	for(i=0; i<5; i++){
		scanf("%d", &courseid[i]);
		std->courseid[i] =courseid[i];
	}
	DPRINTF("[INFO] Update finished Successfully\n");
}

