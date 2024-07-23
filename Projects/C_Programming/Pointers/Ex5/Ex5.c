#include <stdio.h>

struct Smember{
	char *name;
	int id;
};
int main()
{
	static struct Smember mem1 = {"alex",10},mem2 = {"max",11},mem3 = {"mark",12};
	struct Smember (*arr[]) = {&mem1, &mem2, &mem3};
	struct Smember (*(*ptr)[3]) = &arr;	
	printf("employee name: %s \n", (**(*ptr + 1)).name);
	printf("employee id: %d \n", (**(*ptr + 1)).id);
	return 0;
}