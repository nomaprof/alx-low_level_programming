#include "lists.h"

/**
 * free_listint2 - free the structure and set the head to null
 * @head: a pointer to the start of the singly linked list
 *
 * Return: no value
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
	{
		return;
	}
	hold = *head;
	while (*head)
	{
		hold = *head;
		(*head) = (*head)->next;
		free(hold);
	}
	*head = NULL;
}
