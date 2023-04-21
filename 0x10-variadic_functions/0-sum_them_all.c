#include "variadic_functions.h"

/**
 * sum_them_all - add all arguments
 * @n: arguments
 * Return: an integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mp;
	int ans = 0;
	unsigned int x = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(mp, n);
	for (x = 0; x < n; x++)
	{
		ans += va_arg(mp, int);
	}
	va_end(mp);
	return (ans);
}
