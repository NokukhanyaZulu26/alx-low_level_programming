#include "main.h"

/**
 * _isupper - Entry point
 * @c: character to be checked
 * Return: 1 uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
