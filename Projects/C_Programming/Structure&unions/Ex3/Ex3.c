/*
 ============================================================================
 Name        : Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Scomplex{
	float realn;
	float imaginaryn;
}n1,n2,sum;
int main(void) {
	printf("Enter 1st complex number\n");
	printf("Enter real part: ");
	fflush(stdout);
	scanf("%f", &n1.realn);
	printf("Enter imaginary part: ");
	fflush(stdout);
	scanf("%f", &n1.imaginaryn);
	printf("Enter 2st complex number\n");
	printf("Enter real part: ");
	fflush(stdout);
	scanf("%f", &n2.realn);
	printf("Enter imaginary part: ");
	fflush(stdout);
	scanf("%f", &n2.imaginaryn);
	sum.realn = n1.realn + n2.realn;
	sum.imaginaryn = n1.imaginaryn + n2.imaginaryn;
	printf("Sum = %.1f + %.1fi", sum.realn, sum.imaginaryn);
}
