#include "lists.h"

/**
 * free_list - list to be freed
 * @head: points to the first node
 * Return: information on freed list
 */

void free_list(list_t *head)
{
	list_t *ins;

	ins = head;
	while (head)
	{
		ins = head;
		head = head->next;
		free(ins->str);
		free(ins);
	}
	free(head);
}
