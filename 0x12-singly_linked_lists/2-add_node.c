#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning
 * @head: head of the node
 * @str: element of the string linked list
 *
 * Return: address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
