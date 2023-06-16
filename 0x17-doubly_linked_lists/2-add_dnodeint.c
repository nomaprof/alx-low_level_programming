#include "lists.h"

/**
 *add_dnodeint - the new node placed at the start
 *@head: the pointer to the start of the doubly linked lsit
 * 
 *Return: Success or Failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
   dlistint_t *insert_node;

   insert_node = malloc(sizeof(dlistint_t));
   if (insert_node == NULL)
   {
      return (NULL);
   }

   insert_node->n = n;
   insert_node->next = *head;
   insert_node->prev = NULL;
   if (*head != NULL)
   {
      (*head)->prev = insert_node;
   }
   *head = insert_node;
   return (insert_node);
}
