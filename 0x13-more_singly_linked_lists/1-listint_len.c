#include "lists.h"

/**
 * listint_len - Entry point
 * @h: pointer
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		h = h->next;
		b++;
	}
	return (b);
}
