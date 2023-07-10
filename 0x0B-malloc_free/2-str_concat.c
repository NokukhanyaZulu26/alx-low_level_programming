#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int b, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	b = c = 0;
	while (s1[b] != '\0')
		b++;
	while (s2[c] != '\0')
		c++;

	a = malloc(sizeof(char) * (b + c + 1));

	if (a == NULL)
		return (NULL);
	b = c = 0;
	while (s1[b] != '\0')
	{
		a[b] = s1[b];
		b++;
	}
	while (s2[c] != '\0')
	{
		a[b] = s2[c];
		b++, c++;
	}
	a[b] = '\0';
	return (a);
}
