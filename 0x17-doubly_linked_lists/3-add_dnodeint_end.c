#include "list.h"

/**
 * add_dnodeint_end - place new node at the end of the doubly linked list
 *@head: pointer to the start of the doubly linked list
 *
 *Return: the address of new element, or NULL if it failed
 */

dlistint_t *add_nodeint_end(dlistint_t **head, const int n)
{
   dlistint_t *insert_new;

   insert_new = malloc(sizeof(dlistint_t));

   if (insert_new == NULL)
   {
      return (NULL);
   }

   insert_new->n = n;
   insert_new->next = NULL;

   if (*head == NULL)
   {
      insert_new->prev = NULL;
      *head = insert_new;
      return (insert_new);
   }

   while ((*head)->next != NULL)
   {
      *head = (*head)->next;
   }

   (*head)->next = insert_new;
   insert_new->prev = *head;

   return (insert_new);
}
