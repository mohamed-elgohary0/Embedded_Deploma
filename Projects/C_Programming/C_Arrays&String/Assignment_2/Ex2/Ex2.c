/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char sen[100];
	int i, count =0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(sen);
	for(i=0; sen[i] != '\0'; i++){
		count ++;
	}
	printf("Length of the string = %d", count);
}
