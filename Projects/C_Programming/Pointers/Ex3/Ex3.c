#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[30];
	char * ptr = &str;
	printf("Input a string: \n");
	fflush(stdout);
	gets(str);
	int i, size;
	size = strlen(str);
	for(i=size; i>=0; i--){
		printf("%c", *(ptr+i));
	}
	return 0;
}