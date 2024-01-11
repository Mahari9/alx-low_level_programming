#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - does what its name says
 * @h: head of the linked list
 * @idx: index to at which to be inserted
 * @n: value of node
 *
 * Return: new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *head;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	head = *h;

	while (head)
	{
		if (i == idx - 1)
		{
			node->next = head->next;
			node->prev = head;
			if (head->next)
				head->next->prev = node;
			head->next = node;
			return (node);
		}
			i++;
			head = head->next;
	}
	free(node);
	return (NULL);
}
