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

int main(void) {
	float n1, n2;
	float product;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f", &n1, &n2);
	product = n1 * n2;
	printf("product: %f", product);
}
