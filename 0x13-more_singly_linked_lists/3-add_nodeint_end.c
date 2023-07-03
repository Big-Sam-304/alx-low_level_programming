#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: first node
 * @n: data of the node to be added
 *
 * Return: address of the new element
 * NULL if it fails.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *temp;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = end_node;

	return (end_node);
}
