#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: stored memory
 * @src: copied memory
 * @n: value
 *
 * Return: copied memory and bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

