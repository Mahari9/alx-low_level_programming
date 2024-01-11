#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: header of the linkedlist
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	if (!head || !(*head))
		return (-1);
	node = *head;
	while (node)
	{
		if (i == index)
		{
			if (node->next && node->prev)
			{
				node->next->prev = node->prev;
				node->prev->next = node->next;
				free(node);
				return (1);
			}
			else if (!(node->next) && node->prev)
			{
				node->prev->next = NULL;
				free(node);
				return (1);
			}
			else if (!(node->prev) && node->next)
			{
				node->next->prev = NULL;
				*head = node->next;
				free(node);
				return (1);
			}
			else
			{
				free(node);
				*head = NULL;
			}
		}
		i++;
		node = node->next;
	}
	return (-1);
}
