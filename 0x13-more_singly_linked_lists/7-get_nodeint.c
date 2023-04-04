#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: The first node of a listint_t linked list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node. Return NULL if the nth node doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	listint_t *current_node = head;

	count = 0;
	while (head)
	{
		if (index == count)
		{
			return (current_node);
		}

		current_node = current_node->next;
		count++;
	}
	return (NULL);
}
