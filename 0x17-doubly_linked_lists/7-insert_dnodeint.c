#include "lists.h"

/**
  * insert_dnodeint_at_index - place a info element a particular index
  * @h: pointer to start of list
  * @n: value to be inserted
  * @idx: index of postion to place info value in the list
  * Return: Success or Failure
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert_new = NULL, *hold = NULL;
	unsigned int i = 0;

	insert_new = malloc(sizeof(dlistint_t));
	if (!insert_new)
		return (NULL);
	insert_new->next = NULL;
	insert_new->prev = NULL;
	insert_new->n = n;
	if (!h || !(*h))
		*h = insert_new;
	else
	{
		hold = *h;
		while (idx != i++ && hold->next)
			hold = hold->next;
		if (hold->next)
			insert_new->prev = hold->prev;
		else
			insert_new->prev = hold;
		if (idx == i)
			hold->next = insert_new, insert_new->prev = hold;
		else if (idx == i - 1)
		{
			if (hold->prev)
				hold->prev->next = insert_new;
			else
				*h = insert_new;
			hold->prev = insert_new;
			insert_new->next = hold;
		}
		else
		{
			free(insert_new);
			return (NULL);
		}
	}
	return (insert_new);
}
