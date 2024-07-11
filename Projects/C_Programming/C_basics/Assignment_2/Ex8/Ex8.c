/*
 ============================================================================
 Name        : Ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	float n1,n2;
	printf("Enter operator either + or - or * or devide: ");
	fflush(stdout);
	scanf("%c", &c);
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&n1 ,&n2 );
	switch(c){
	case '+' : {printf("%.2f + %.2f = %.2f", n1, n2 , n1+n2);
		break;}
	case '-' : {printf("%.2f - %.2f = %.2f", n1, n2 , n1-n2);
		break;}
	case '*' : {printf("%.2f * %.2f = %.2f", n1 ,n2 , n1*n2);
		break;}
	case '/' : {printf("%.2f / %.2f = %.2f", n1 ,n2 , n1/n2);
		break;}
	}
}
