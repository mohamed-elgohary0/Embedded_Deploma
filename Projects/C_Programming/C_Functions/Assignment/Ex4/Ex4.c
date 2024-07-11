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

int main(void) {
	int n, p;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d", &n);
	printf("Enter power number(positive integer): ");
	fflush(stdout);
	scanf("%d", &p);
	int result = power(n, p);
	printf("%d ^ %d = %d", n, p, result);
}
int power(int n, int p){
	if(p == 0)
		return 1;
	else
		return (n * power(n, p-1));
}
