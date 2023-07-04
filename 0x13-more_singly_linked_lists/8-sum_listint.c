#include "lists.h"

/**
 * sum_listint - calculates the sum of all data(n) of a listint_t linked list
 * @head: head node
 *
 * Return: the sum of all data(n)
 * 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (!head)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
