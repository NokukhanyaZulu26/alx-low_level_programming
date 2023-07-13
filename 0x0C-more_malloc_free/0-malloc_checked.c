#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: number of bytes to allocates
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *j = malloc(b);

	if (j == 0)
		exit(98);
	return (j);
}
