#include "main.h"

/**
 * swap_int - Entry point
 * @a: integer to swap
 * @b: integer to swap
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
