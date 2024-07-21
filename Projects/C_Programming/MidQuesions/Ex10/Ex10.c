/*
 ============================================================================
 Name        : Ex10.c
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
	printf("Enter number: ");
	fflush(stdout);
	scanf("%d", &n);
	int max = maxones(n);
	printf("max ones = %d", max);
}
int maxones(int num){
	int i = 0 , k = 1 , n = 0, counter = 0;
		int onesNumber = 0 ;
		for(i = 31 ; i >= 0 ; i--)
		{
			n = num >> i ;
			if(n & k)
			{
				printf("1");
				counter++;

			}
			else
			{
				printf("0");

				if(counter > onesNumber)
				{
					onesNumber = counter ;
					counter = 0;
				}
				else
					counter = 0;

			}

		}
		return onesNumber;
}
