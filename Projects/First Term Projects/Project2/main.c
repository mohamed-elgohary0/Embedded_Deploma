/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#include "fifo.h"

int main(void) {
	int choice;
	FIFO_Buf_t FIFO_UART;
	int studentCount = 0;

	FIFO_init(&FIFO_UART,std,MAXNUM_STDS);
	if (FIFO_init(&FIFO_UART,std,MAXNUM_STDS) == fifo_no_error )
		{
			DPRINTF("[INFO] fifo_init is done\n");

		}
	while(1){
		DPRINTF("=======================Student Management System========================\n");
			DPRINTF("Choose one Option form below:-\n");
			DPRINTF("1-Add student details from file\n");
			DPRINTF("2-Add student details Manually\n");
			DPRINTF("3-Find student by the roll number\n");
			DPRINTF("4-Find student by the first name\n");
			DPRINTF("5-Find the students registered in a course\n");
			DPRINTF("6-Count of the students\n");
			DPRINTF("7-Delete a student\n");
			DPRINTF("8-Update student informations\n");
			DPRINTF("9-Show all informations\n");
			DPRINTF("10- Exit\n");
			DPRINTF("Enter your choice: \n");
			fflush(stdout);
			scanf("%d", &choice);
		switch(choice){
		case 1:
			Add_student_by_file(&FIFO_UART, "students.txt");
			break;
		case 2:
			Add_student_Manually(&FIFO_UART);
			break;
		case 3:
			Find_student_by_rollnumber(&FIFO_UART);
			break;
		case 4:
			Find_student_by_firstname(&FIFO_UART);
			break;
		case 5:
			Find_students_in_course(&FIFO_UART);
			break;
		case 6:
			Count_students(&FIFO_UART);
			break;
		case 7:
			Delete_student(&FIFO_UART);
			break;
		case 8:
			Update_student(&FIFO_UART);
			break;
		case 9:
			Show_all_student(&FIFO_UART);
			break;
		case 10:
			return 0;
			break;
		default:
			DPRINTF("[ERROR] Wrong choice Try Again!\n");
			break;
		}
	}
}



