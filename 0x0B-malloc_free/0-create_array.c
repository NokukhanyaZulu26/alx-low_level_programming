#include "main.h"
#include<stdlib.h>

/**
 * create_array - Entry point
 * @size: size of array
 * @c: char to be initialized
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *t = malloc(size);

	if (size == 0 || t == 0)
		return (0);
	while (size--)
		t[size] = c;
	return (t);
}
