#include "lists.h"

/**
 * insert_nodeint_at_index - place a new node at any position
 * @head: a pointer to the start of the singly linked list
 * @idx: position where new node should be placed
 * @n: tracks the number of nodes in the link
 *
 * Return: the address of the added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m = 1;
	listint_t *newcar, *hold;

	if (head == NULL)
	{
		return (NULL);
	}
	newcar = malloc(sizeof(listint_t));
	if (newcar == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newcar;
		newcar->next = NULL;
		newcar->n = n;
		return (newcar);
	}
	if (idx == 0)
	{
		newcar->next = *head;
		newcar->n = n;
		*head = newcar;
		return (newcar);
	}
	hold = *head;
	while (m < idx)
	{
		hold = hold->next;
		m++;
	}
	newcar->n = n;
	newcar->next = hold->next;
	hold->next = newcar;
	return (newcar);
}
