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
	int i, j;
	float a[2][2], b[2][2];
	float sumarr[2][2];
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("Enter a[%d][%d]: ", i, j);
			fflush(stdout);
			scanf("%f" , &a[i][j]);
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("Enter b[%d][%d]: ", i, j);
			fflush(stdout);
			scanf("%f" , &b[i][j]);
		}
	}
	printf("Sum of Matrix:\n");
	for(i=0; i<2; i++){
		for(j=0; j<0; j++){
			sumarr[i][j] = a[i][j] + b[i][j];
			printf("%.1f\t", sumarr[i][j]);
		}
		printf("\n");
	}
}
