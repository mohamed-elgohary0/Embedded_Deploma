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
#include <string.h>

int main(void) {
	char sen[100];
	char revsen[100];
	int i = 0, j, temp;
	printf("Enter the string");
	fflush(stdout);
	gets(sen);
	int length = strlen(sen);
	j=length -1;
	while(i<j){
		temp = sen[i];
		sen[i] = sen[j];
		sen[j] = temp;
		i++;
		j--;
	}
	printf("Reverse string is = %s", sen);
}
