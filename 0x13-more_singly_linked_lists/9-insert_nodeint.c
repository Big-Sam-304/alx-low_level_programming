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

	listint_t *new_node, *current_node;

	new_node = ((listint_t *)malloc(sizeof(listint_t)));
	if (new_node == NULL)
		return (NULL);

	current_node = *head;
	counter = 0;

	while (current_node)
	{
		if (counter == idx)
		{
			new_node->n = n;
			new_node->next = current_node;
			current_node = new_node;
		}

		current_node = current_node->next;
		counter++;
	}
	return (NULL);
}
