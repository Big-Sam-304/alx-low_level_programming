#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: pointer to elements in linked list.
 *
 * Return: Number of elements in linked list list_t.
 */

size_t list_len(const list_t *h)
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
