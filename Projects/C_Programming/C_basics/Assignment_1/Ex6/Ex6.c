/*
 ============================================================================
 Name        : Ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n1, n2;
	float temp;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f", &n1, &n2);
	temp = n1;
	n1 = n2;
	n2 = temp;
	printf("After swaping, value of a = %f\n", n1);
	printf("After swaping, value of b = %f", n2);

}
