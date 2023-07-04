#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head node
 *
 * Return: address of the node where the loop starts
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	fast = head;
	slow = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
