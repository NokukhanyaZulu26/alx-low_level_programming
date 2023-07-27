#include "lists.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 * @s: String
 * Return: nodes printed
 */
int _strlen(char *s)
{
	int k = 0;

	if (!s)
		return (0);
	while (*s++)
		k++;
	return (k);
}

/**
 * print_list - Entry point
 * @h: pointer
 * Return: list
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		k++;
	}
	return (k);
}
