#include "lists.h"
/**
 * free_dlistint - A dlistint is freed
 * @head: Pointer to the head of a list
 *
 * Return: Nothing to be returned
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (NULL);

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
