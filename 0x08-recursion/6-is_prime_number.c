#include "main.h"

/**
* is_prime_number - checks if a number is prime
*@n: the number
*
*Return: Number is prime if true
*/

int is_prime_number(int n)
{
	int m = n / 2;

	if (n < 2)
	{
		return (0);
	}
	else if ((n == 2) || (n == 3))
	{
		return (1);
	}
	return (prime(n, m));
}

/**
* prime - gives the answer as 1 or 0
* @n: the number
* @m: divisor
*
* Return: 1 or 0
*/

int prime(int n, int m)
{
	if (m <= 1)
		return (1);
	else if (n % m == 0)
		return (0);
	return (prime(n, m - 1));
}
