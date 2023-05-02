#include "lists.h"

/**
 * delete_nodeint_at_index - delete any node in the singly linked list
 * @head: a pointer to the start of the singly linked lists
 * @index: the node that needs to be deleted from the list
 *
 * Return: success or failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold, *delete;
	unsigned int m = 1;

	if (*head == NULL)
	{
		return (-1);
	}
	hold = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(hold);
	}
	else
	{
		while (m < index)
		{
			hold = hold->next;
			if (hold == NULL)
			{
				return (-1);
			}
			m++;
		}
		delete = hold;
		delete = delete->next;
		hold->next = delete->next;
		free(delete);
	}
	return (1);
}
