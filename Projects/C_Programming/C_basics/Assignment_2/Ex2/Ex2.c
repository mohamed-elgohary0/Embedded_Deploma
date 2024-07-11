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
	char alpha;
	printf("Enter an alphabet");
	fflush(stdout);
	scanf("%c",&alpha);
	if(alpha == 'i' || alpha == 'a' || alpha == 'e' || alpha == 'o'
		|| alpha == 'u' || alpha == 'I' || alpha == 'A' || alpha == 'E'
				|| alpha == 'O' || alpha == 'U')
		printf("%c is a vowel", alpha);
	else
		printf("%c is a consonant", alpha);
}
