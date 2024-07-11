/*
 ============================================================================
 Name        : Ex1.c
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
	int n;
	printf("Enter an positive integer: ");
	fflush(stdout);
	scanf("%d", &n);
	int fact = factorial(n);
	printf("Factorial of %d = %d", n, fact);
}
int factorial(int n){
	int fac = 1;
	if(n == 1)
		return fac;
	if(n == 0)
		return 1;
	fac = n * factorial(n-1);
}

