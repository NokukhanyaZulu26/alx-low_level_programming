#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 * @separator: The string
 * @n: The number of integers
 * @...: A variable
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int t = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (t--)
		printf("%d%s", va_arg(ap, int),
				t ? (separator ? separator : "") : "\n");
	va_end(ap);
}
