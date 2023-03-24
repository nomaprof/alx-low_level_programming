#include "main.h"

/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/

void more_numbers(void)
{
	int n, o;

	for (n = 0; n < 10; n++)
	{
		for (o = 0; o <= 14; o++)
		{
			if (o > 9)
			{
				_putchar(o / 10 + '0');
			}
			_putchar(o % 10 + '0');
		}
		_putchar(10);
	}
}
