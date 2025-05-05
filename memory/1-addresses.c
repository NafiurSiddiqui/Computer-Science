#include <stdio.h>

int main(void)
{
//	int n = 50;
//	printf("%i\n", n);
//	printf("With Pointer and address of: %p\n", &n);
	//printf("with pointer without address of: %p\n", n); will fail
	
	//we can also do the following

	int number = 60;
	int *address_ref = &number; //holds the address of the memory where the value is stored
	printf("%p\n", address_ref);
	printf("The value in that memory block is: %i\n", *address_ref);

}
