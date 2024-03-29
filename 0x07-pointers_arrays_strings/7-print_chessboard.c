#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: pointer to pieces to print
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int c, d;

	for (c = 0; c < 8; c++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar(a[c][d]);
		}
		_putchar('\n');
	}
}
