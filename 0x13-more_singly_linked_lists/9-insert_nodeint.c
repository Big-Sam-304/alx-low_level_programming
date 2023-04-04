#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @idx: Index of the list where the new node should be addedd. starts at 0.
 * @n: The data of the new node.
 * @head: Pointer to the first node of a listint_t linked list.
 *
 * Return: On success, the address of the new node.
 * else returns NULL if unsuccessful.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;

	listint_t *new_node, *current_node, *prev_node;

	if (head == NULL)
		return (NULL);

	new_node = ((listint_t *)malloc(sizeof(listint_t)));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current_node = *head;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	counter = 0;

	while (current_node)
	{
		if (counter == idx)
		{
			prev_node->next = new_node;
			new_node->next = current_node;
			return (new_node);
		}

		prev_node = current_node;
		current_node = current_node->next;
		counter++;
	}
	free(new_node);
	return (NULL);
}
