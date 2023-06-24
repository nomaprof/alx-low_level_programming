#include "monty.h"

/**
 * _queue - the first in first out style of arranging elements
 *
 * @doubly: the start of the doubly linked list
 * @cline: track line number
 * Return: no value
 */
void _queue(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	vglo.lifo = 0;
}

/**
 * _stack - the last in first out style of arranging elements
 *
 * @doubly: the start of the doubly linked list
 * @cline: track line number
 * Return: no value
 */
void _stack(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	vglo.lifo = 1;
}

/**
 * _add - select the last two elements of a list and add them
 *
 * @doubly: the start of the linked list
 * @cline: track the line number;
 * Return: no value
 */
void _add(stack_t **doubly, unsigned int cline)
{
	int u = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, u++)
		;

	if (u < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n += (*doubly)->n;
	_pop(doubly, cline);
}

/**
 * _nop - this function does nothing
 *
 * @doubly: start of the linked list
 * @cline: track the line number;
 * Return: no value
 */
void _nop(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;
}

/**
 * _sub - find the difference between the top two elements of the stack
 *
 * @doubly: start of the linked list
 * @cline: track the  line number;
 * Return: no value
 */
void _sub(stack_t **doubly, unsigned int cline)
{
	int u = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, u++)
		;

	if (u < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n -= (*doubly)->n;
	_pop(doubly, cline);
}
