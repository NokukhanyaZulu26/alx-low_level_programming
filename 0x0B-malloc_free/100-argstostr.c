#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Entry point
 * @ac: int
 * @av: pointer
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, x = 0, v = 0;

	 char *r;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			v++;
	}
	v += ac;
	r = malloc(sizeof(char) * v + 1);
	if (r == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			r[x] = av[a][b];
			x++;
		}
		if (r[x] == '\0')
		{
			r[x++] = '\n';
		}
	}
	return (r);
}
