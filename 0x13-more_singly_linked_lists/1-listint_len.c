#include "lists.h"

/**
 * listint_len - get the number of elements in a singly linked list
 * @h: the iterator used to iterate through the created linked list
 *
 * Return: the value representing the number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t car = 0;

	while (h)
	{
		car++;
		h = h->next;
	}
	return (car);
}
