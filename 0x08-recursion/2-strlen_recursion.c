#include "main.h"


/**
* _strlen_recursion - gets string's length
* @s: the string
*Return: string's length
*/

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s != '\0')
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}

