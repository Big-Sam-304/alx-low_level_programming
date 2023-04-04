#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 *
 * @head: pointer to the first node in listint_t list.
 *
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	current_node = *head;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
