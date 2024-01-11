#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list);
	}
}
