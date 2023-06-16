#include "lists.h"

/**
 * print_dlistint - get the number of elements in a doublylinked list
 * @h: pointer to start
 *
 * Return: the number of elements in the doublylinked list
 */

size_t print_dlistint(const dlistint_t *h)
{
    int tracker = 0;

    if (h == NULL)
    {
        return (tracker);
    }

    while (h->prev != NULL)
    {
        h = h->prev;
    }

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        tracker++;
    }

    return (tracker);
}
