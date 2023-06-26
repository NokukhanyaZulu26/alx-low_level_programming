#include "main.h"

/**
 * print_rev - Entry point
 * @s: pointer to a char
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
