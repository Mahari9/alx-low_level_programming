#include "lists.h"

/**
 * sum_dlistint - sums the values of a doubly linked list
 * @head: head of the linked list
 *
 * Return: sum of values
 */

int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
