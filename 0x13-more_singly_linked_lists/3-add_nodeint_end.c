#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of listint_t list.
 *
 * @head: Pointer to node in listint_t list.
 * @n: element of the new node.
 *
 * Return: Pointer to the last node. Or NULL if not successful.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = ((listint_t *)malloc(sizeof(listint_t)));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
