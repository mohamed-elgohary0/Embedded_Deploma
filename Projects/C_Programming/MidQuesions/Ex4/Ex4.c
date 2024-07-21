/*
 ============================================================================
 Name        : Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reversenum(int n);
int main() {
	int n;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &n);
	reversenum(n);
}
void reversenum(int n){
	int rev =0;
	printf("Revrse number is: ");
	while(n){
		rev = n % 10;
		n = n / 10;
		printf("%d", rev);
	}
}
