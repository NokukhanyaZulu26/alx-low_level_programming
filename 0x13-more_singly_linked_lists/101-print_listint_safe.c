#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - Entry point
 * @list: list
 * @size: size
 * @new: new node
 * Return: pointer
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t g;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (g = 0; g < size - 1; g++)
		newlist[g] = list[g];
	newlist[g] = new;
	free(list);
	return (newlist);
}
/**
 * print_listint_safe - Entry point
 * @head: pointer
 * Return: pointer
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t g, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (g = 0; g < num; g++)
		{
			if (head == list[g])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("-> [%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
