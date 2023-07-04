#include "lists.h"

/**
 * print_listint_safe - prints a linked listint_t list
 * @head: head node
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *fast, *slow;

	if (head == NULL || head->next)
	{
		return (0);
	}

	fast = head;
	slow = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (98);
		}
	}

	while (head != NULL)
	{
		printf("%d\n", head->n);
		counter++;
		head = head->next;
	}

	return (counter);
}
