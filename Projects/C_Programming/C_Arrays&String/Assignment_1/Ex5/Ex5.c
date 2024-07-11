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

int main(void) {
	int size, i, n;
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d", &size);
	int arr[size];
	for(i=0; i<size; i++){
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be searched: ");
	fflush(stdout);
	scanf("%d", &n);
	for(i=0; i<size; i++){
		if(arr[i] == n)
			printf("Number found at the location: %d", i+1);
	}
}
