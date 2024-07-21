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

int findones(int n);
int main(void) {
	int n;
	printf("Enter number: ");
	fflush(stdout);
	scanf("%d", &n);
	int result = findones(n);
	printf("number of ones is %d", result);
}
int findones(int n){
	int i, count =0;
	for(i=31; i>=0; i--){
		if(n&(1<< i)){
			count ++;
		}
	}
	return count;
}
