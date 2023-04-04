#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list and
 * returns the head node's data(n).
 *
 * @head: the first node of listint_t linked list.
 *
 * Return: The data n of the head node.
 */

int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
