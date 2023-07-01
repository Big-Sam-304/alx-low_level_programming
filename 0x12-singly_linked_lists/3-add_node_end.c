#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a singly list
 * @head: head of the node
 * @str: element of the singly list
 *
 * Return: address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}
