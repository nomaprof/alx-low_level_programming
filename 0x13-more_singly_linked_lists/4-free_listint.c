#include "lists.h"

/**
 * free_listint -  free the structure after it has been used
 * @head: pointer to the first node in the singly linked list
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
