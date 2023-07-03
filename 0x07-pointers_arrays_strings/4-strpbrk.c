#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: string to be searched
 * @accept: input
 *
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
				return (s);
		}
		s++;
	}
	return ('\0');
}
