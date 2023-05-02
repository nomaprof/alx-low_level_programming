#include "lists.h"

/**
 * pop_listint - delete the head of a linked list and print its data
 * @head: pointer to the start of a singly linked list
 *
 * Return: the data contained in the deleted head node
 */

int pop_listint(listint_t **head)
{
	listint_t *newcar;
	int ans;

	if (*head == NULL)
	{
		return (0);
	}
	ans = (*head)->n;
	newcar = (*head)->next;
	free(*head);
	*head = newcar;
	return (ans);
}
