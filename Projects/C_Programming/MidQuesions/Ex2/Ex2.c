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

void findroot(int n);
int main(void) {
	int n;
	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d", &n);
	findroot(n);
}

void findroot(int n){
	int i = 0;
		float increment = .1 , root = 0;
	    for (i = 0; i < 6; i++) {
	        while (root * root <= n) {
	        	root += increment;
	        }
	        root = root - increment;
	        increment = increment / 10;
	    }
	printf("the square root is: %.3f", root);
}


