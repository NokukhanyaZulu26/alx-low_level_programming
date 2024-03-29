#include "main.h"

/**
 * leet - Entry point
 * letters a and A replaced with 4
 * lettera e and E replaced with 3
 * letters o and O replaced with 0
 * letters t and T replaced with 7
 * letters l and L replaced with 1
 * @m: input value
 * Return: m value
 */
char *leet(char *m)
{
	int p, q;
	char leetletters[] = "aAeEoOtTlL";
	char leetnumbers[] = "4433007711";

	for (p = 0; m[p] != '\0'; p++)
	{
		for (q = 0; q < 10; q++)
		{
			if (m[p] == leetletters[q])
			{
				m[p] = leetnumbers[q];
			}
		}
	}
	return (m);
}
