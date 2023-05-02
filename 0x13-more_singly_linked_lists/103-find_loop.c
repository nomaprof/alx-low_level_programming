#include "lists.h"

/**
 * find_listint_loop - find loop in a singly linked list
 * @head: a pointer to the start of a singly linked list
 *
 * Return: the address of the node where the loop for the link starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head, *second = head;

	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			return (first);
		}
	}
	return (NULL);
}
