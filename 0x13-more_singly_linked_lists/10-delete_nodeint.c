#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head: pointer
 * @index: index
 * Return: 1, or 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int k = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (k == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		k++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
