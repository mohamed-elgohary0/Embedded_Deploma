/*
 ============================================================================
 Name        : Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct sdata{
	char name[30];
	int roll;
	float mark;
}student;
int main()
{
	printf("Enter information of students:\n");
	printf("Enter name: ");
	fflush(stdout);
	gets(student.name);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d", &student.roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &student.mark);
	printf("Displaying information:\n");
	printf("name: %s\n", student.name);
	printf("roll number: %d\n", student.roll);
	printf("marks: %.2f", student.mark);
}

