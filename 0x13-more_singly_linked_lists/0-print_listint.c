#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			node++;
		}
	}

	return (node);
}
