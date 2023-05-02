#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of the list
 * @head: pointer to the start of the singly linked list
 * @n: keeps track of the number of nodes in the list
 *
 * Return: the address of the newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newcar;

	newcar =  malloc(sizeof(listint_t));
	if (newcar == NULL)
	{
		return (NULL);
	}
	newcar->n = n;
	newcar->next = *head;
	*head = newcar;
	return (newcar);
}
