#include "lists.h"

/**
 * free_listint_safe - free singly linked list in a loop
 * @h: track the singly linked lists
 *
 * Return: the size of the freed singly linked list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t track = 0;
	listint_t *hold;

	hold = *h;
	while (hold)
	{
		hold = *h;
		hold = hold->next;
		free_listint(hold);
		track++;
	}
	*h = NULL;
	return (track);
}

/**
 * free_listint - free the structure after it has been used
 * @head: pointer to the first node in the signly linked list
 *
 * Return: no value
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
