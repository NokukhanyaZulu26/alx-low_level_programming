#include "lists.h"

/**
 * pop_listint - Entry point
 * @head: pointer
 * Return: value
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int g;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	g = (*head)->n;
	free(*head);
	*head = node;
	return (g);
}
