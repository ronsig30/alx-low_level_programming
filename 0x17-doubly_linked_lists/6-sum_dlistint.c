#include "lists.h"
/**
 * sum_dlistint - retuns the sum of all data of a
 * dlistint_t list
 *
 * @head: Head pointer to a list
 *
 * Return: 0, if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
