#include "lists.h"

/**
  * sum_dlistint - add all members of a doubly linked list
  * @head: double pointer to start of list
  *
  * Return: Success or Failure
  */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;
	dlistint_t *m;

	for (m = head; m != NULL; m = m->next)
	{
		add += m->n;
	}
	return (add);
}
