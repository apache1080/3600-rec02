/*
			Recitation 2 - CSCE 3600
	Created By Zach Friedman - zmf0010 - zacheryfriedman@my.unt.edu
	Swaps two integers using XOR bitwise operator, sans third variable.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int *int_ptr, ans;

	int_ptr = (int *)malloc(2 * sizeof(int));

	if(int_ptr == NULL)
	{
		printf("malloc() returned NULL...");
		exit(1);
	}

	printf("Enter first integer: ");
	scanf("%d", &ans);
	int_ptr[0] = ans;

	printf("Enter second integer: ");
	scanf("%d", &ans);
	int_ptr[1] = ans;

	printf("Original values: 1st = \t%d 2nd = \t%d\n", int_ptr[0], int_ptr[1]);

	int_ptr[0] = int_ptr[0] ^ int_ptr[1];
	int_ptr[1] = int_ptr[0] ^ int_ptr[1];
	int_ptr[0] = int_ptr[0] ^ int_ptr[1];

	printf("Swapped values: 1st = \t%d 2nd = \t%d\n", int_ptr[0], int_ptr[1]);

	return 0;
}
