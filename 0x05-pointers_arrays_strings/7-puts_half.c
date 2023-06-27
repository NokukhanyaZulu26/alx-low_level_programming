#include "main.h"

/**
 * puts_half - Entry point
 * @str: pointer to char
 * Return: half of input
 */
void puts_half(char *str)
{
	int len = 0;
	int j;
	int k;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		k = len / 2;
	}
	else
	{
		k = (len - 1) / 2 + 1;
	}
	for (j = k; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
