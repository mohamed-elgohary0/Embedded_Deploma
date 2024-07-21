/*
 ============================================================================
 Name        : Ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void revarray(int arr[], int size);
int main(void) {
	int i, size;
	printf("Enter size of array: ");
	fflush(stdout);
	scanf("%d", &size);
	int arr[size];
	for(i=0; i<size; i++){
		fflush(stdout);
		fflush(stdin);
		scanf("%d", &arr[i]);
	}
	revarray(arr, size);
}
void revarray(int arr[], int size){
	int i;
	printf("Array after reverse = ");
	for(i=size -1 ; i>=0; i--){
			printf("%d ", arr[i]);
		}
}
