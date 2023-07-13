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
	int len, h;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - max + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (h = 0; h < len; h++)
		ptr[h] = min++;
	return (ptr);
}
