#include "lists.h"

/**
 * list_len - what is the number of elements
 * @h: tracks the answer
 * Return: answer
 */

size_t list_len(const list_t *h)
{
	size_t contents = 0;

	while (h)
	{
		contents++;
		h = h->next;
	}
	return (contents);
}
