/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size;
	float avr = 0;
	float sum = 0;
	printf("Enter the number of data: ");
	fflush(stdout);
	scanf("%d", &size);
	float arr[size];
	int i;
	for(i=0; i<size; i++){
		printf("Enter number: ");
		fflush(stdout);
		scanf("%f", &arr[i]);
	}
	for(i=0; i<size; i++){
		sum += arr[i];
	}

	printf("Avarege = %.2f", sum);
}
