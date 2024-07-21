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

void findsum(int n);
int main()
{
	int n;
	printf("input number: ");
	fflush(stdout);
	scanf("%d",&n);
	findsum(n);
}
void findsum(int n){
	int res =0;
	while(n){
			res = res + n%10;
			n = n / 10;
		}
		printf("output: %d", res);
}
