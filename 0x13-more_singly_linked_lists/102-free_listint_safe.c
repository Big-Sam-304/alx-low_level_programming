#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t list.
 *
 * @h: Pointer to the first node.
 *
 * Return: The size of the list that was free'd.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter;

	listint_t *current_node, *next_node;

	counter = 0;

	if (h == NULL || *h == NULL)
	{
		return (counter);
	}

	current_node = *h;

	while (current_node != NULL)
	{
		counter++;

		next_node = current_node->next;

		if (next_node >= current_node)
		{
			current_node->next = NULL;
			free(current_node);
		}

		free(current_node);
		current_node = next_node;
	}
	*h = NULL;
	return (counter);
}

