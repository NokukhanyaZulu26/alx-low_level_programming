#include "main.h"

/**
 * print_number - Entry point
 * @n: integer to be printed
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	unsigned int b = n;

	if (n < 0)
	{
		_putchar(45);
		b = -b;
	}
	if (b / 10)
	{
		print_number(b / 10);
	}
	_putchar(b % 10 + '0');
}
