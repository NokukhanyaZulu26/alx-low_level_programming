#include "main.h"

/**
 * rev_string - Entry point
 * @s: pointer to a char
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int length, c, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	c = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - c - 1];
		s[length - c - 1] = s[c];
		s[c] = temp;
		c++;
	}
}
