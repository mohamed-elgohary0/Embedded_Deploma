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

int check(int i);

int main(void) {
	int i, n1, n2, count;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%d %d", &n1, &n2);
	printf("Prime numbers are: ", n1, n2 );
	for(i= n1 + 1; i<n2; i++){
		count = check(i);
		if(count == 0)
		printf("%d ", i);
	}
}
int check(int i){
	int count= 0;
	int j;
	for(j=2; j<i / 2; ++j){
		if(i % j == 0){
			count = 1;
			break;
		}
	}
	return count;
}
