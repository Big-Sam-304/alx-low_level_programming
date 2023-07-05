#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node
 *
 * Return: size of the list that was free'd
 *
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;

	listint_t *temp;

	if (*h == NULL || h == NULL)
	{
		return (0);
	}

	while (*h != NULL)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		counter++;
	}

	*h = NULL;

	return (counter);
}
