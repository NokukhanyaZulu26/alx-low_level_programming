#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: input value
 * @src: source string pointer
 * @n: number of bytes used
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
