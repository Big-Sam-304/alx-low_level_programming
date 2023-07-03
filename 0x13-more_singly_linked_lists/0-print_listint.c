#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: elements to print.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
