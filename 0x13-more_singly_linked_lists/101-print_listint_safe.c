#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: pointer to first node.
 *
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);

		count++;

		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (98);
		}

		head = head->next;
	}
	return (count);
}
