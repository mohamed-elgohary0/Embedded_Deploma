/*
 ============================================================================
 Name        : Ex9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void revstring(char string[],int size);
int main(void) {
	char str[50];
	printf("Enter string: ");
	fflush(stdout);
	gets(str);
	int length = strlen(str);
	revstring(str, length);
}
void revstring(char str[],int size){
	char first[20], second[20], revstr[20];
	int i, j, space;
	for(i=0;i<size;i++)
	{
		if (str[i]==' ')
			space = i;
	}

	for(i=0;i<space;i++)
	{
		if(str[i]!=' ')
			first[i]=str[i];
		else
			space=i;
	}
	first[i]='\0';

	for(i=space+1,j=0;i<size;i++,j++)
	{
		if(str[i]!= '\0')
		second[j]=str[i];
	}
	second[j]='\0';

	strcpy(revstr,second);
	strcat(revstr," ");
	strcat(revstr,first);

	printf("The string after reverse is:\n%s",revstr);
}

