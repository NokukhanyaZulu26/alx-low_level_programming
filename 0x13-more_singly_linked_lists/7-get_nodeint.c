#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @head: pointer
 * @index: index
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int t;

	for (node = head, t = 0; node && t < index; node = node->next, t++)
		;
	return (node);
}
