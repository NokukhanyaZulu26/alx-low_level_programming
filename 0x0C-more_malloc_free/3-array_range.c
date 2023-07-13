#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
