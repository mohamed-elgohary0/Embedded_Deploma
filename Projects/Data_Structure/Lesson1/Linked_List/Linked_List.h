/*
 * Linked_List.h
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"conio.h"

#define DPRINTF(...) {fflush(stdin);\
					fflush(stdout);\
					printf(__VA_ARGS__);\
					fflush(stdin);\
					fflush(stdout);}
#define MAX 40
struct SData {
	int id;
	char name[MAX];
	float height;
};

struct Sstudent{
	struct SData student;
	struct Sstudent* pnextstd;
};

//APIs
void AddStudent();
void DeleteStudent();
void ViewStudents();
void DeleteAllStudents();
void GetNthNode();
void LikedList_Length();
void NthNodeFromEnd();
void MiddleLinkedList();
void ReverseLinkedList();

#endif /* LINKED_LIST_H_ */
