#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head node
 *
 * Return: a pointer to the first node of the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	previous = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
