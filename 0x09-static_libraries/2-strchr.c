#include "main.h"

/**
 * _strchr - Entry point
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
