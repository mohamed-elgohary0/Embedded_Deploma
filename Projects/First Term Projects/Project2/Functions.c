/*
 * Functions.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#include "Functions.h"
#include "fifo.h"
#include "stdlib.h"
#include"string.h"
void Add_student_by_file(FIFO_Buf_t* fifo, const char *filename) {
	struct stdinfo std;
	FILE *file = fopen(filename, "r");
	if (file == NULL) {
		printf("Error opening file.\n");
		return;
	}

	while (fscanf(file, "%49s %49s %d %f %d %d %d %d %d", &std.fstname, &std.lastname, &std.rollnum,
			&std.gpa, &std.courseid[0], &std.courseid[1], &std.courseid[2],
			&std.courseid[3], &std.courseid[4]) != EOF) {
		if(FIFO_Enqueue(fifo,&std) == fifo_no_error){
				DPRINTF("[INFO] Roll number %d saved successfully\n",std.rollnum);
		}
			else
				DPRINTF("[ERROR] Roll number %d is already taken\n",std.rollnum);
	}

	fclose(file);
}
void Add_student_Manually(FIFO_Buf_t* fifo){
	int i=0;
	struct stdinfo newstd;

	DPRINTF("Enter first name: ");
	fflush(stdin);
	fflush(stdout);
	gets(newstd.fstname);
	DPRINTF("Enter last name: ");
	fflush(stdin);
	fflush(stdout);
	gets(newstd.lastname);
	DPRINTF("Enter roll number ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &newstd.rollnum);
	DPRINTF("Enter the gpa: ");
	fflush(stdout);
	scanf("%f", &newstd.gpa);
	DPRINTF("Enter course id [IDs available only from 0 to 9] \n");
	DPRINTF("[WARNING] you must choose 5 courses\n");
	while(i<5){
		scanf("%d", &newstd.courseid[i]);
		if(newstd.courseid[i] > 9)
		{DPRINTF("[ERROR] Wrong choice! Try Again\n");}
		else
		{i++;}
	}
	if(FIFO_Enqueue(fifo,&newstd) == fifo_error)
		{DPRINTF("[ERROR] Roll number already token\n");}
	else{
		DPRINTF("[INFO] Student Added Successfully\n");
		return;
	}
}
Find_student_by_rollnumber(FIFO_Buf_t* fifo){
	unsigned int rollcheck, i;
	struct stdinfo* checkptr = fifo->base;
	DPRINTF("Enter student's roll number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &rollcheck);
	for(i=0; i<fifo->count; i++){
		if(checkptr->rollnum == rollcheck){
			FIFO_print(checkptr);
			return;
		}
		checkptr++;
	}
	DPRINTF("[ERROR] Wrong roll number!\n");
}

void Find_student_by_firstname(FIFO_Buf_t* fifo){
	unsigned int i, flag = 0;
	char checkname[MAX];
	struct stdinfo* checkptr = fifo->base;
	DPRINTF("Enter student's first name: ");
	fflush(stdin);
	fflush(stdout);
	gets(checkname);
	for(i=0; i<fifo->count; i++){
		if(strcmp(checkname, checkptr->fstname) == 0){
			FIFO_print(checkptr);
			flag++;
		}
		checkptr++;
	}
	if(flag == 0)
		DPRINTF("Wrong first name!\n");
}

void Find_students_in_course(FIFO_Buf_t* fifo){
	int i,j,id, count=0;
	struct stdinfo* std = fifo->base;
	DPRINTF("Enter the course ID: ");
	fflush(stdout);
	scanf("%d", &id);
	for(i=0; i<fifo->count; i++){
		for(j=0; j<5; j++){
			if(std->courseid[j] == id){
				DPRINTF("[INFO]	student number %d: %s %s\n",count+1 ,std->fstname, std->lastname);
				count++;
				break;
			}
		}
		std++;
	}
}

void Count_students(FIFO_Buf_t* fifo){
	DPRINTF("[INFO]  Number of students = %d\n", fifo->count);
	DPRINTF("[INFO]  You can add up to 50 students\n");
	DPRINTF("[INFO]  You can add %d more students\n", (MAXNUM_STDS- fifo->count));
}

void Delete_student(FIFO_Buf_t* fifo){
	unsigned int rollcheck, i;
	struct stdinfo* checkptr = fifo->base;
	DPRINTF("Enter the roll number for the student to delete: ");
	fflush(stdout);
	scanf("%d", &rollcheck);
	for(i=0; i<fifo->count; i++){
		if(checkptr->rollnum == rollcheck){
			if(FIFO_Delete(fifo,checkptr, i) == fifo_no_error){
				DPRINTF("[INFO] Student deleted successfully\n")
				return;
			}
		}
		checkptr++;
	}
	DPRINTF("[ERROR] Wrong roll number!\n");
}

void Update_student(FIFO_Buf_t* fifo){
	int choice, i, flag = 0;
	struct stdinfo* std = fifo->base;
	DPRINTF("Enter student roll number to update: ");
	fflush(stdout);
	scanf("%d",&choice);
	for(i=0; i<fifo->count; i++){
		if(std->rollnum == choice){
			DPRINTF("Choose from below what you want to update:\n");
			DPRINTF("1-first name\n");
			DPRINTF("2-last name\n");
			DPRINTF("3-GPA\n");
			DPRINTF("4-roll number\n");
			DPRINTF("5-courses\n");
			DPRINTF("Enter your choice: ");
			fflush(stdout);
			scanf("%d", &choice);
			switch(choice){
			case 1:
				Update_FirstName(fifo,std);
				flag++;
				break;
			case 2:
				Update_LastName(fifo,std);
				flag++;
				break;
			case 3:
				Update_GPA(fifo,std);
				flag++;
				break;
			case 4:
				Update_RollNum(fifo,std);
				flag++;
				break;
			case 5:
				Update_courses(fifo,std);
				flag++;
				break;
			default:
				DPRINTF("[ERROR] Wrong choice\n");
				flag++;
				break;
			}
		}
		std++;
	}
	if(flag == 0)
		DPRINTF("[ERROR] Student not found!\n");
}

void Show_all_student(FIFO_Buf_t* fifo)
{
	struct stdinfo* temp;
	int i;
	temp = fifo->base;
	if(fifo->count == 0)
	{
		DPRINTF("[ERROR] fifo is empty\n");
	}
	else
	{
		for(i=0; i<fifo->count; i++){
			DPRINTF("[INFO]	student number %d\n", i+1)
			FIFO_print(temp);
			temp++;
		}
	}
}

