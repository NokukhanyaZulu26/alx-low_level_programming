#include "main.h"

/**
 * reverse_array - Entry point
 * @a: pointer ro array
 * @n: number of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int g;
	int h;

	for (g = 0; g < n--; g++)
	{
		h = a[g];
		a[g] = a[n];
		a[n] = h;
	}
}
