#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - Returns the sum of all the data(n) of
 * a listint_t linked list.
 *
 * @head: Pointer to the first node of a listint_t linked list.
 *
 * Return: The sum of of all the data in a listint_t linked list.
 * Else, return 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum_of_data;

	listint_t *current_node = head;

	sum_of_data = 0;
	if (current_node == NULL)
	{
		return (0);
	}

	while (current_node != NULL)
	{
		sum_of_data += current_node->n;
		current_node = current_node->next;
	}
	return (sum_of_data);
}
