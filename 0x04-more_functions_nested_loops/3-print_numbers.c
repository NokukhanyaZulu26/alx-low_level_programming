#include "main.h"

/**
 * print_numbers - Entry point
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
