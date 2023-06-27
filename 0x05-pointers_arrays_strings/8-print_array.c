#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: pointer to int array
 * @n: elements/array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < (n - 1); z++)
	{
		printf("%d, ", a[z]);
	}
	if (z == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

