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
	dlistint_t *info;
	dlistint_t *head;
	unsigned int m;

	info = NULL;
	if (idx == 0)
		info = add_dnodeint(h, n);
	else
	{
		head = *h;
		m = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (m == idx)
			{
				if (head->next == NULL)
					info = add_dnodeint_end(h, n);
				else
				{
					info = malloc(sizeof(dlistint_t));
					if (info != NULL)
					{
						info->n = n;
						info->next = head->next;
						info->prev = head;
						head->next->prev = info;
						head->next = info;
					}
				}
				break;
			}
			head = head->next;
			m++;
		}
	}

	return (info);
}
