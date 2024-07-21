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

int findunique(int arr[], int size);
int main(void) {
	int i, size;
	printf("Enter size of array: ");
	fflush(stdout);
	scanf("%d", &size);
	int arr[size];
	printf("Enter elements: ");
	for(i=0; i<size; i++){
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	int result = findunique(arr, size);
	printf("Unique number is = %d", result);
}
int findunique(int arr[], int size){
	int i, j;
	for(i=0; i<size; i++){
		int count = 0;
		for(j=0; j<size; j++){
			if(arr[j] == arr[i])
				count++;
	}
		if(count == 1)
			return arr[i];
	}
}
