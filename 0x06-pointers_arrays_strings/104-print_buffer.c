#include "main.h"
#include<stdio.h>

/**
 * print_buffer - Entry point
 * @b: buffer
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int s, e;

	if (size > 0)
	{
		for (s = 0; s < size; s += 10)
		{
			e = (size - s < 10) ? size - s : 10;
			printf("%08x: ", s);
			printf(b, s, e);
			printf("\n");
		}
	} else
		printf("\n");
}
