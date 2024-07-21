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

int sumofnumbers(int n);
int main(void) {
	int n =100;
		printf("The sum numbers between 1 to 100 = %d", sumofnumbers(n));
}
int sumofnumbers(int n){
	if(n){
		return n + sumofnumbers(n-1);
	}
}
