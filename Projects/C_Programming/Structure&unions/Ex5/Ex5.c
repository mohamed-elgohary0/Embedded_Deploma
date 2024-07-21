/*
 ============================================================================
 Name        : Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define pi 3.14
#define area(r) ((pi)*(r)*(r))
int main(void) {
	int r;
	float result;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%d",&r);
	result = area(r);
	printf("Area = %.2f", result);
}
