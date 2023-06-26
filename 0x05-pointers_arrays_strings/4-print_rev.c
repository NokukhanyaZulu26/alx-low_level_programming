#include "main.h"

/**
 * print_rev - Entry point
 * @s: pointer to a char
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}

