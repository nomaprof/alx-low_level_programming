#include "main.h"

/**
*print_numbers - function that print all numbers from
*0 to 9
*
*Return: returns nothing
*/

void print_numbers(void)
{
	int i;
	char num[10] = "0123456789";

	for (i = 0; i <= 9; i++)
	{
		_putchar (num[i]);
	}

	_putchar('\n');
}
