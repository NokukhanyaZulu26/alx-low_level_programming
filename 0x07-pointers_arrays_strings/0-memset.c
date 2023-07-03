#include "main.h"

/**
 * _memset - Entry point
 * @n: bytes to be changed
 * @b: char to be copied
 * @s: memory tobe filled
 *
 * Return: pointer the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int o;

	for (o = 0; o < n; o++)
	{
		s[o] = b;
	}

	return (s);
}
