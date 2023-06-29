#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Entry point
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int m, n, o;

	m = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (m < size)
	{
		n = size - m < 10 ? size - m : 10;
		printf("%08x: ", m);
		for (o = 0; o < 10; o++)
		{
			if (o < n)
				printf("%02x", *(b + m + o));
			else
				printf("  ");
			if (o % 2)
			{
				printf(" ");
			}
		}
		for (o = 0; o < n; o++)
		{
			int p = *(b + m + o);

			if (p < 32 || p > 132)
			{
				p = '.';
			}
			printf("%c", p);
		}
		printf("\n");
		m += 10;
	}
}

