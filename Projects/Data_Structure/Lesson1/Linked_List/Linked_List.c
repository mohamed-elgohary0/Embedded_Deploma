/*
 * Linked_List.c
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#include "Linked_list.h"

struct Sstudent* gpfirststd;
void AddStudent(){
	struct Sstudent* pnewstd;
	struct Sstudent* laststd;
	char temp[MAX];
	if(gpfirststd == NULL){
		pnewstd= (struct Sstudent*)malloc(sizeof(struct Sstudent));
		gpfirststd = pnewstd;
	}
	else{
		laststd = gpfirststd;
		while(laststd->pnextstd)
			laststd = laststd->pnextstd;
		pnewstd= (struct Sstudent*)malloc(sizeof(struct Sstudent));
		laststd->pnextstd = pnewstd;
	}
	DPRINTF("Enter your id: ");
	gets(temp);
	pnewstd->student.id = atoi (temp);
	DPRINTF("Enter your name: ");
	gets(pnewstd->student.name);
	DPRINTF("Enter your height: ");
	gets(temp);
	pnewstd->student.height = atof (temp);
	pnewstd->pnextstd = NULL;
}
void DeleteStudent(){
	struct Sstudent* currentstd;
	struct Sstudent* prevstd;
	int id;
	DPRINTF("Enter the id you want to delete: ");
	scanf("%d", &id);
	currentstd = gpfirststd;
	prevstd = currentstd;
	while(currentstd){
		if(currentstd->student.id == id){
			if(currentstd == gpfirststd){
				gpfirststd = currentstd->pnextstd;
				free(currentstd);
				return;
			}
			else{
				prevstd->pnextstd = currentstd->pnextstd;
				free(currentstd);
				return;
			}
		}
		prevstd = currentstd;
		currentstd = currentstd->pnextstd;
	}
		DPRINTF("Wrong id!\n");
}
void ViewStudents(){
	unsigned int count=1;
	struct Sstudent* laststd;
	laststd = gpfirststd;
	if(laststd == NULL)
	{DPRINTF("the list is Empty\n");}
	else{
		while(laststd){
			DPRINTF("Record number %d\n", count);
			DPRINTF("%d\n", laststd->student.id);
			DPRINTF("%s\n", laststd->student.name);
			DPRINTF("%.2f\n",laststd->student.height);
			laststd = laststd->pnextstd;
			count++;
		}
	}
}
void DeleteAllStudents(){
	struct Sstudent* currentstd;
	struct Sstudent* prevstd;
	currentstd = gpfirststd;
	prevstd = currentstd;
	if(currentstd == NULL)
		{DPRINTF("the list is Empty\n");}
	else{
		while(currentstd){
			currentstd = currentstd->pnextstd;
			free(prevstd);
			prevstd = currentstd;
		}
		gpfirststd = NULL;
	}
}

void GetNthNode(){
	struct Sstudent* selectedstd = gpfirststd;
	int count;
	DPRINTF("Enter the index of the student you want to View");
	scanf("%d", &count);
	while(1){
		if(count == 0){
			DPRINTF("%d\n", selectedstd->student.id);
			DPRINTF("%.2f\n", selectedstd->student.height);
			DPRINTF("%s\n", selectedstd->student.name);
			return;
		}
		if(count<0){
			DPRINTF("student of that index not found");
			return ;
		}
		selectedstd = selectedstd->pnextstd;
		count--;
	}
}

void LikedList_Length(){
	struct Sstudent* currentstd = gpfirststd;
	unsigned int count = 0;
	while(currentstd){
		count++;
		currentstd = currentstd->pnextstd;
	}
	DPRINTF("The length of Linked List = %d\n", count);
}
void NthNodeFromEnd(){
	int i;
	struct Sstudent* mainptr = gpfirststd;
	struct Sstudent* tempptr = mainptr->pnextstd;
	for(i=0; i<2; i++){
		if(tempptr == NULL){
			DPRINTF("Linked List is less than 3 nodes");
			return;
		}
		tempptr  = tempptr->pnextstd;
	}
	tempptr = NULL;
	struct Sstudent* refptr = mainptr->pnextstd->pnextstd;
	if(refptr == NULL){
		DPRINTF("Linked List is less than 3 nodes");
	}
	while(refptr){
		mainptr = mainptr->pnextstd;
		refptr = refptr->pnextstd;
	}
	DPRINTF("%d\n", mainptr->student.id);
	DPRINTF("%.2f\n", mainptr->student.height);
	DPRINTF("%s\n", mainptr->student.name);
}
void MiddleLinkedList(){
	struct Sstudent* slowptr= gpfirststd;
	struct Sstudent* fastptr= slowptr;
	while(fastptr){
		fastptr = fastptr->pnextstd;
		if(fastptr == NULL)
			break;
		fastptr = fastptr->pnextstd;
		slowptr = slowptr->pnextstd;
	}
	DPRINTF("%d\n", slowptr->student.id);
	DPRINTF("%.2f\n", slowptr->student.height);
	DPRINTF("%s\n", slowptr->student.name);
}
void ReverseLinkedList(){
	struct Sstudent* head;
	struct Sstudent* next;
	struct Sstudent* current;
	struct Sstudent* prev;
	next = gpfirststd;
	prev = next;
	current = next;
	head = next;
	while(current){
		next = current->pnextstd;
		current->pnextstd = prev;
		prev = current;
		current = next;
	}
	gpfirststd = prev;
	head->pnextstd = NULL;
	DPRINTF("Revrse is done");
}
