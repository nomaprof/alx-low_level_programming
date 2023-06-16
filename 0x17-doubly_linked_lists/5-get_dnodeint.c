#include "lists.h"

/**
  * get_dnodeint_at_index - get the value of node at a specified index
  * @head: double pointer to start of list
  * @index: position of node of interest
  *
  * Return: Success or Failure
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *present;
	unsigned int m;

	present = head;
	m = 0;

	while (present != NULL)
	{
		if (m == index)
		{
			return (present);
		}
		present = present->next;
		m++;
	}
	return (NULL);
}
