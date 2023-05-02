#include "lists.h"

/**
 * reverse_listint - reverse the order of a singly linked list
 * @head: a pointer to the start of a singly linked list
 *
 * Return: the address of the first node after reversing the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL, *after;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}
	*head = before;
	return (*head);
}
