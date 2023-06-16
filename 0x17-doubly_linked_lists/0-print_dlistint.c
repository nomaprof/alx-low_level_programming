#include "lists.h"

/**
  * print_dlistint - print members of doubly linked lists
  * @h: pointer to start of doubly linked lists
  *
  * Return: the total number of nodes in struct.
  */

size_t print_dlistint(const dlistint_t *h)
{
	int tracker = 0;

	if (h == NULL)
	{
		return (tracker);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		tracker++;
	}

	return (tracker);
}
