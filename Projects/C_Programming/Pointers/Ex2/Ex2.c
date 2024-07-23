#include <stdio.h>

int main()
{
	char x = 65;
	char* ptr = &x;
	int i;
	printf("The Alphabets are :\n");
	for(i =0;  i<= (90 - 65); i++){
		printf("%c  ", *(ptr) + i);
	}
	return 0;
}
