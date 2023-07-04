#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: head node
 *
 * Return: head node's data (n);
 */

int pop_listint(listint_t **head)
{
	int num_1;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	num_1 = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num_1);
}
