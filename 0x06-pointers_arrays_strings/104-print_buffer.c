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
	int start_line, end_line;

	if (size > 0)
	{
		for (start_line = 0; start_line < size; start_line += 10)
		{
			end_line = (size - start_line < 10) ? size - start_line : 10;
			printf("%08x: ", start_line);
			printf(b, start_line, end_line);
			printf("\n");
		}
	} else
		printf("\n");
}
