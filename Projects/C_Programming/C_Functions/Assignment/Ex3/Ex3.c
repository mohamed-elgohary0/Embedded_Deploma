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

void reverse(sen);
int main(void) {
	char sen[200];
	printf("Enter a sentence: ");
	fflush(stdout);
	gets(sen);
	int len = strlen(sen);
	reverse(sen, len-1, 0);
	printf("%s", sen);
}

void reverse(char *sen, int len, int i){
	if(i >= len)
		return;
	char temp = sen[i];
	sen[i] = sen[len];
	sen[len] = temp;
	reverse(sen, len-1, i+1);
}
