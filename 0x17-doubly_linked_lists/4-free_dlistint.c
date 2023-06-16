#include "lists.h"

/**
  * free_dlistint - free malloc for list
  * @head: pointer to start of list
  *
  * Return: Success or Failure
  */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
