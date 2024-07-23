#include <stdio.h>

int main()
{
	int i, arr[15], size;
	printf("Input the number of elements to store in the array (max 15) :\n");
	fflush(stdout);
	scanf("%d", &size);
	for(i=0; i<size; i++){
	printf("element-%d: ", i+1);
	fflush(stdout);
	scanf("%d", &arr[i]);
	}
	printf("The elements of array in reverse order are :\n");
	int* ptr = &arr;
	for(i=size -1; i>=0; i--){
		printf("element - %d : %d\n", i+1, *(ptr + i));
	}
	return 0;
}