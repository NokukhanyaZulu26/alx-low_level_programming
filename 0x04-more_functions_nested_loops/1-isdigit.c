#include "main.h"

/**
 * _isdigit - check if digits are 0 - 9
 * @c: char to be checked
 * Return: 1 for character or 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
