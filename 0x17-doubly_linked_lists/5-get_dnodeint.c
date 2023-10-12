#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of
 * a dlistint_t
 *
 * @head: Pointer to the head of a list
 *
 * @index: index of node to search
 *	Starting from 0
 *Return: NULL or nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size)
			return (temp);
		size++;
		temp = temp->next;
	}

	return (NULL);
}
