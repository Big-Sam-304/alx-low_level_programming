#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list.
 *
 * @h: pointer to node in a listint_t list.
 *
 * Return: Number of elemts in listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
