#include "lists.h"

/**
  * add_dnodeint - add a node to start of list
  * @head: pointer to start of list
  * @n: the information to be added
  *
  * Return: Success or Failure
  */

dlistint_t *add_dnodeint(dlisting_t **head, const int n)
{
	dlistint_t *insert_new;

	insert_new = malloc(sizeof(dlistint_t));
	if (insert_new == NULL)
	{
		return (NULL);
	}
	insert_new->n = n;
	insert_new->next = *head;
	insert_new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = insert_new;
	}
	*head = insert_new;
	return (insert_new);
}
