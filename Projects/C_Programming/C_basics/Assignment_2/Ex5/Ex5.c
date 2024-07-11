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
	char alpha;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &alpha);
	if(alpha >= 'a' && alpha <= 'z')
		printf("%c is an alphabet", alpha);
	else if(alpha >= 'A' && alpha <= 'z')
		printf("%c is an alphabet", alpha);
	else
		printf("%c is not an alphabet", alpha);
}
