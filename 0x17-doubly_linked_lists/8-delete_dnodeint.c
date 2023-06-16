#include "lists.h"

/**
  * delete_dnodeint_at_index - remove a value in the list at an index
  * @head: pointer to start of list
  * @index: position to be deleted
  * Return: Success or Failure
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *d1;
	dlistint_t *d2;
	unsigned int i;

	d1 = *head;

	if (d1 != NULL)
		while (d1->prev != NULL)
			d1 = d1->prev;

	i = 0;

	while (d1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = d1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				d2->next = d1->next;

				if (d1->next != NULL)
					d1->next->prev = d2;
			}

			free(d1);
			return (1);
		}
		d2 = d1;
		d1 = d1->next;
		i++;
	}

	return (-1);
}
