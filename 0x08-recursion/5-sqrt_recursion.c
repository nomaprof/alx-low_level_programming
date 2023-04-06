#include "main.h"

/**
* _sqrt_recursion - the natural square root of a number
* @n: the number
*
* Return: the answer
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (ans(0, n));
}

/**
 * ans - the square root
 * @n: possible answer
 * @m: the original value
 *  Return: the value of n
 */

int ans(int n, int m)
{
	if (n > m / 2)
		return (-1);
	else if (n * n == m)
		return (n);
	return (ans(n + 1, m));
}
