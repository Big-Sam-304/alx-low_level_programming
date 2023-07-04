#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: head node
 * @index: index at which the node will be deleted
 *
 * Return: 1 if succeded, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous, *temp;

	unsigned int i = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	previous = NULL;

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	previous->next = current->next;
	free(current);

	return (1);
}
