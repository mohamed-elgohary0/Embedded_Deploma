#include <stdio.h>

int main()
{
	int m = 29;
	printf("Address of m : %x\n", &m);
	printf("Value of m = %d\n",m);

	int *pab = &m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : %x\n", pab);
	printf("Content of pointer ab : %d\n", *pab);

	m = 34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab : %x\n", pab);
	printf("Content of pointer ab : %d\n", *pab);

	*pab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m : %x\n", pab);
	printf("Value of m : %d\n", *pab);
	return 0;
} 