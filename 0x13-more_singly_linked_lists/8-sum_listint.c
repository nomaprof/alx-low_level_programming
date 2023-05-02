#include "lists.h"

/**
 * sum_listint - add the values of a singly linked lists together
 * @head: a pointer to the start of a singly linked list
 *
 * Return: the total sum of the values of the singly linked list
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
