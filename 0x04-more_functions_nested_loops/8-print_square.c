#include "main.h"

/**
 * print_square - Entry point
 * @size: size of square
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int e, f;

		for (e = 0; e < size; e++)
		{
			for (f = 0; f < size; f++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
