#include "lists.h"

/**
  * dlistint_len - get number of nodes
  * @h: point to start of list
  *
  * Return: Success or Failure
  */
size_t dlistint_len(const dlistint_t *h)
{
	int tracker = 0;

	if (h == NULL)
	{
		return (tracker);
	}
	while (h != NULL)
	{
		tracker++;
		h = h->next;
	}
	return (tracker);
}
