#include "lists.h"

/**
 * get_nodeint_at_index - get the structure of any node of interest
 * @head: a pointer to the start of a singly linked list
 * @index: the node whose structure is needed.
 *
 * Return: the needed structure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (m == index)
		{
			return (head);
		}
		head = head->next;
		m++;
	}
	return (NULL);
}
