#include "lists.h"

/**
 * print_list - get all components of a struct
 * @h: a pointer to all components of a struct
 * Return: a count of the nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *tracker = h;
	size_t answer = 0;

	while (tracker != NULL)
	{
		if (tracker->str != NULL)
		{
			printf("[%d] %s\n", tracker->len, tracker->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		answer += 1;
		tracker = tracker->next;
	}
	return (answer);
}
