#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head node.
 * @idx: index at which to insert the new node
 * @n: data of the new node
 *
 * Return: address of the new node
 * NULL if it fails.
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current, *temp, *new_node;

	current = *head;

	if (idx >= 1)
	{
		while (current != NULL && i < idx)
		{
			current = current->next;
			i++;
		}

		if (current == NULL)
		{
			return (NULL);
		}
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->n = n;
	temp = current->next;
	current->next = new_node;
	new_node->next = temp;

	return (new_node);
}
