/*
 ============================================================================
 Name        : Ex03.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n1, n2 , n3;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &n1, &n2, &n3);
	if(n1 > n2){
		if(n1 > n3)
			printf("largest number = %.2f", n1);
		else
			printf("largest number = %.2f", n3);
	}
	else{
		if(n2 > n3)
			printf("largest number = %.2f", n2);
		else
			printf("largest number = %.2f", n3);
	}
}
