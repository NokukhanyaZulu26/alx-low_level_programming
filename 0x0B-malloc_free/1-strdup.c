#include "main.h"
#include<stddef.h>
#include<stdlib.h>

/**
 * _strdup - Entry point
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	int k = 0, size = 0;
	char *j;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;
	j = malloc(size * sizeof(*str) + 1);

	if (j == 0)
		return (NULL);
	{
		for (; k < size; k++)
			j[k] = str[k];
	}
	return (j);
}
