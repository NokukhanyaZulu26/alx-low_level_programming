#include "main.h"

/**
 * string_toupper - Entry point
 * @k: pointer to string
 *
 * Return: k pointer
 */
char *string_toupper(char *k)
{
	int a;

	a = 0;
	while (k[a] != '\0')
	{
		if (k[a] >= 97 && k[a] <= 122)
			k[a] = k[a] - 32;

		a++;
	}
	return (k);
}
