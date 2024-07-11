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

int main(void) {
	char sentence [1000];
    char ch;
	int count = 0 , i;
	printf("Enter an string: ");
	fflush(stdout);
	gets(sentence);
	printf("Enter a charecter to find frequency: ");
	fflush(stdout);
	scanf("%c",&ch);
	for(i=0; sentence[i] != '\0'; i++){
		if(sentence[i] == ch)
			count++;
	}
	printf("Frequency of %c = %d", ch, count);
}
