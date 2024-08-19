/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */


#include "Linked_List.h"

int main(){
	unsigned int choice;
	while(1){
		DPRINTF("\t \tChoose Your option\n\n");
			DPRINTF("\t1-Add student\n");
			DPRINTF("\t2-Delete student\n");
			DPRINTF("\t3-View students\n");
			DPRINTF("\t4-Delete all students\n");
			DPRINTF("\t5-Get the Nth node\n");
			DPRINTF("\t6-The length of the Linked List\n");
			DPRINTF("\t7-Get 3rd node from the end\n");
			DPRINTF("\t8-The middle of linked list\n");
			DPRINTF("\t9-Reverse the liked list\n");
			DPRINTF("Enter your choice: ");
			scanf("%d", &choice);
			DPRINTF("===============================================\n");

			switch(choice){
			case 1:
				AddStudent();
				break;
			case 2:
				DeleteStudent();
				break;
			case 3:
				ViewStudents();
				break;
			case 4:
				DeleteAllStudents();
				break;
			case 5:
				GetNthNode();
				break;
			case 6:
				LikedList_Length();
				break;
			case 7:
				NthNodeFromEnd();
				break;
			case 8:
				MiddleLinkedList();
				break;
			case 9:
				ReverseLinkedList();
				break;
			default:
				DPRINTF("Wrong choice");
				break;
			}
	}
}
