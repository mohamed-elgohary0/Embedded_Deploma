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

int main(void) {
	int n1 , n2;
	int sum;
	printf("Enter two integers :");
	fflush(stdout);
	scanf("%d %d", &n1, &n2);
	sum= n1 + n2;
	printf("The sum : %d", sum);
}
