#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Entry point
 * @h: pointer
 * Return: list
 */
size_t list_len(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		h = h->next;
		y++;
	}
	return (y);
}
