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
	int size, n, location;
	int arr[30];
	printf("Enter the number of elements: ");
	fflush(stdout);
	scanf("%d", &size);
	int i;
	for(i=0; i<size; i++){
		printf("Enter element: ");
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	printf("Enter the number to be inserted: ");
	fflush(stdout);
	scanf("%d", &n);
	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d", &location);
	for(i=size; i>=location; i--){
		arr[i] = arr[i-1];
	}
	size++;
	arr[location-1]= n;
	for(i=0; i<size; i++){
		printf("%d", arr[i]);
	}
}
