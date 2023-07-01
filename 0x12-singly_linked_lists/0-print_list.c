#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list.
 * @h: elements of list_t list
 *
 * Return: Number of elements in linked list list_t.
 */

size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);

		count++;
		h = h->next;
	}
	return (count);
}
