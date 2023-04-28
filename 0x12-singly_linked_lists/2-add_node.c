#include "lists.h"

/**
 * add_note - change the start of a list
 * @head: points to first node
 * @str: keeps track of strings in the list
 * Return: the information for the next node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ins;
	int track = 0;

	ins = malloc(sizeof(list_t));
	if (ins == NULL)
	{
		return (NULL);
	}
	while (str[track])
	{
		track++;
	}
	ins->len = track;
	ins->str = strdup(str);
	ins->next = *head;
	*head = ins;
	return (ins);
}
