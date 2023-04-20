#include "function_pointers.h"

/**
 * print_name - print the name
 * @name: the name to print
 * @f: the pointer
 * Return: no value
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
