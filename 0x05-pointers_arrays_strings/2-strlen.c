#include "main.h"

/**
 * _strlen - Entry point
 * @s: string to be checked
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
