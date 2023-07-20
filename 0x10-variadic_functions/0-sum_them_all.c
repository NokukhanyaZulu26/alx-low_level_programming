#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: The number of paramters
 * @...: A variable number of paramters
 * Return: integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int g = 0, h = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (h--)
		g += va_arg(ap, int);
	va_end(ap);
		return (g);
}
