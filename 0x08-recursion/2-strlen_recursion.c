#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int g = 0;

	if (*s > '\0')
	{
		g += _strlen_recursion(s + 1) + 1;
	}
	return (g);
}
