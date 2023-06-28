#include "main.h"

/**
 * rot13 - Entry point
 * @t: input string
 *
 * Return: *t value
 */

char *rot13(char *t)
{
	int k;

	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = t;

	while (*t)
	{
		for (k = 0; k <= 52; k++)
		{
			if (*t == rot13[k])
			{
				*t = ROT13[k];
				break;
			}
		}
		t++;
	}
	return (ptr);
}
