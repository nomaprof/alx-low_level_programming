#include "lists.h"

/**
 * print_listint - print the contents of a singly linked list
 * @h: the created linked list
 *
 * Return: the values of the singly linked lists
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *answer = h;
	size_t track = 0;

	while (answer != NULL)
	{
		printf("%d\n", answer->n);
		track += 1;
		answer = answer->next;
	}
	return (track);
}
