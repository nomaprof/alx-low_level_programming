#include "lists.h"

/**
 * add_node_end - place new information at the end of the list
 * @head: points to the first node
 * @str: the content to be updated
 * Return: the new information
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *answer, *ins;
	unsigned int track = 0;

	answer = malloc(sizeof(list_t));
	if (answer == NULL)
	{
		return (NULL);
	}
	while (str[track])
	{
		track++;
	}
	answer->len = track;
	answer->str = strdup(str);
	if (*head == NULL)
	{
		answer->next = *head;
		*head = answer;
	}
	else
	{
		answer->next = NULL;
		ins = *head;
		while (ins->next)
		{
			ins = ins->next;
		}
		ins->next = answer;
	}
	return (answer);
}
