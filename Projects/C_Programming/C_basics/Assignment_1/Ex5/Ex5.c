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
	char n;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &n);
	printf("ASCII Value of %c is %d", n , n);
}
