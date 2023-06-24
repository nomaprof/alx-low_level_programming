#include "monty.h"

/**
 * get_opcodes - take any opcode of your choice
 *
 * @opc: use the correct opcode
 *
 * Return: pointer to the function that carries out the opcode
 */
void (*get_opcodes(char *opc))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"queue", _queue},
		{"stack", _stack},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{NULL, NULL}
	};
	int m;

	for (m = 0; instruct[m].opcode; m++)
	{
		if (_strcmp(instruct[m].opcode, opc) == 0)
			break;
	}

	return (instruct[m].f);
}
