#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: head node
 * @index: nth node
 *
 * Return: nth node.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL && i < index)
	{
		temp = head->next;
		i++;
	}

	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		return (temp);
	}
}
