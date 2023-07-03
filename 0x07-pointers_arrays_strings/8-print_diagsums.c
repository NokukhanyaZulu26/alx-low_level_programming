#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: integers
 * @size: input
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int w, sum1 = 0, sum2 = 0;

	for (w = 0; w < size; w++)
	{
		sum1 += a[w];
		a += size;
	}
	a -= size;

	for (w = 0; w < size; w++)
	{
		sum2 += a[w];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
