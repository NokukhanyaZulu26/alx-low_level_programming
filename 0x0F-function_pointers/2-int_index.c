#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: int array
 * @size: array size
 * @cmp: compare function
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m = 0;

	if (array && size && cmp)
		while (m < size)
		{
			if (cmp(array[m]))
				return (m);
			m++;
		}
	return (-1);
}
