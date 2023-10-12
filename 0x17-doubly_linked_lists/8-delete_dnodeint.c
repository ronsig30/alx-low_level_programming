#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a dlistint_t list
 *
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1, *h2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	h1 = *head;
	while (h1 != NULL && i < index)
	{
		h2 = h1;
		h1 = h1->next;
		i++;
	}

	if (h1 == NULL)
	{
		return (-1);
	}

	if (i == 0) 
	{
		*head = h1->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		h2->next = h1->next;
		if (h1->next != NULL)
		{
			h1->next->prev = h2;
		}
	}

	free(h1);
	return (1);
}
