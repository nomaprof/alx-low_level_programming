#include "lists.h"

/**
  * add_dnodeint_end - add a node to the end of the list
  * @head: pointer to start of the lisht
  * @n: value to be inserted at the end of the list
  *
  * Return: Success or Failure
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *insert_new;

	insert_new = malloc(sizeof(dlistint_t));

	if (insert_new == NULL)
	{
		return (NULL);
	}
	insert_new->n = n;
	insert_new->next = NULL;

	if (*head == NULL)
	{
		insert_new->prev = NULL;
		*head = insert_new;
		return (insert_new);
	}

	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}

	(*head)->next = insert_new;
	insert_new->prev = *head;

	return (insert_new);
}
