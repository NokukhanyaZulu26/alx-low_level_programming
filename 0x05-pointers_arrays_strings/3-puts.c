#include "main.h"

/**
 * _puts - Entry point
 * @str: pointer to a char
 * Return: string followed by new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
