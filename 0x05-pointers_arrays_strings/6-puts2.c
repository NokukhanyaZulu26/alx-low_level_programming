#include "main.h"

/**
 * puts2 - Entry point
 * @str: pointer to a char
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
