#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index of
 * a listint_t linked list.
 *
 * @head: pointer to the first node of a listint_t linked list.
 * @index: index of the node that should be deleted. index starts at 0.
 *
 * Return: 1 if succeeses, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *prev_node, *current_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
		return (1);
	}

	prev_node = *head;
	current_node = (*head)->next;
	i = 1;

	while (current_node != NULL)
	{
		if (index == i)
		{
			prev_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}

	return (-1);
}
