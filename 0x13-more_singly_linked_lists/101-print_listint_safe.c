#include "lists.h"

/**
 * print_listint_safe - a safe way to print the contents of a list
 * @head: a pointer to the start of a singly linked list
 *
 * Return: the total number of nodes in the singly linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t car = 0;
	const listint_t *first = head, *second = head;

	if (head == NULL)
	{
		exit(98);
	}
	while (first && second && second->next && head)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		car++;
	}
	head = NULL;
	return (car);
}
