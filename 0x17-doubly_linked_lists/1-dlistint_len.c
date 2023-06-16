#include "lists.h"

/**
 *dlistint_len - get the number of elements
 *@h: ponter to start
 *
 *Return: the exact number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    int tracker = 0;

    if (h == NULL)
    {
        return (tracker);
    }

    while (h != NULL)
    {
        tracker++;
        h = h->next;
    }

    return (tracker);
}
