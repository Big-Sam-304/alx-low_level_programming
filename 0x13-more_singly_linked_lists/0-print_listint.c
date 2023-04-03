#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint - prints all the elements of listint_t list.
*
*@h: node of listint list.
*
* Return: number of node.
*/

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
