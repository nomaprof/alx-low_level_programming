#include "main.h"

/**
* factorial - get factorial of a number
* @n: the number
*
* Return: the answer
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

