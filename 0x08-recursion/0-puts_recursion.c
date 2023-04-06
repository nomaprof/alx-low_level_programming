#include "main.h"

/**
* _puts_recursion - prints string
*@s: the string
*Return: nothing
*/

void _puts_recursion(char *s)
{
	int x = 0;

	if (*s == '\0')
	{
		return;
	}

	_putchar(s[x]);
	_puts_recursion(s + 1);
	_putchar('\n');
}
