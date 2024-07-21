/*
 ============================================================================
 Name        : Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sstudent{
	int marks;
	char name[20];
}stdarr[10];
int main() {
	int i;
	printf("Enter information of students:\n");
	for(i=0; i<10; i++){
		printf("for roll number %d:\n ", i+1);
		printf("Enter name: ");
		fflush(stdout); fflush(stdin);
		gets(stdarr[i].name);
		printf("Enter marks: ");
		fflush(stdout); fflush(stdin);
		scanf("%d", &stdarr[i].marks);
	}
	printf("displaying informations of students:\n");
	for(i=0; i<10;i++){
		printf("informations for roll %d\n", i+1);
		printf("name: %s\t", stdarr[i].name);
		printf("marks: %d\n", stdarr[i].marks);
	}
}
