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
	float n;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &n);
	if(n==0)
		printf("You entered zero");
	else if(n > 0 )
		printf("%.2f is positive", n);
	else if(n < 0 )
		printf("%.2f is negative", n);
}
