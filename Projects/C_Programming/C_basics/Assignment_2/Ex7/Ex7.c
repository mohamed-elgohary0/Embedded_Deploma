/*
 ============================================================================
 Name        : Ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
		int n;
		int factorial = 1;
		printf("Enter an integer: ");
		fflush(stdout);
		scanf("%d", &n);
		int i;
		if(n < 0)
		{
			printf("Error!!! Factorial of negative number does not exist");
			return 0;
		}
		if(n == 0){
			printf(" factoial of zero is 1");
			return 0;
		}
		for(i=1; i <= n; i++){
			factorial = factorial * i;
		}
		printf("the factorial = %d", factorial);
}
