#include "lists.h"
#include <stdlib.h>

/**
 * free_list -frees a singly linked list
 * @head: first node of the list to be freed
 *
 * Return: nothing.
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
