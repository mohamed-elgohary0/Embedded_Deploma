/*
 ============================================================================
 Name        : Ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swaping: the value of a = %d\n", a);
	printf("After swaping: the value of b = %d", b);

}
