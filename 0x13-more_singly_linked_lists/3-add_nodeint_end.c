#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of the list
 * @head: pointer to the start of the singly linked list
 * @n: tracks the number of nodes in the list
 *
 * Return: the address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newcar;
	listint_t *answer = *head;

	newcar = malloc(sizeof(listint_t));
	if (newcar != NULL)
	{
		newcar->n = n;
		newcar->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (answer != NULL)
	{
		while (answer->next != NULL)
		{
			answer = answer->next;
		}
		answer->next = newcar;
	}
	else
	{
		*head = newcar;
	}
	return (newcar);
}
