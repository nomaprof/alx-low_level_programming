#include "main.h"

/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/

void print_most_numbers(void)
{
	int i;
	char num[10] = "01356789";

	for (i = '0'; i >= '7'; i++)
	{
		_putchar(num[i]);
	}
	_putchar('\n');
}
