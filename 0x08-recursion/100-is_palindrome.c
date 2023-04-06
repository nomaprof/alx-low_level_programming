#include "main.h"

/**
* is_palindrome - checks if a string is a palindrome
*@s: the string
*Return: true of a palindrome
*/

int is_palindrome(char *s)
{
	int m = 0;
	int n = len(s);

	if (!(*s))
		return (1);

	return (answer(s, n, m));
}

/**
 * len - The length of string
 * @s: The string
 *
 * Return: The string's length
 */
int len(char *s)
{
	int n = 0;

	if (*(s + n))
	{
		n++;
		n += len(s + n);
	}

	return (n);
}

/**
 * answer - Confirms if a string is a palindrome
 * @s: The string.
 * @n: The string's length
 * @m: The string's working index
 *
 * Return: 1 or 0
 */

int answer(char *s, int n, int m)
{
	if (s[m] == s[n / 2])
		return (1);

	if (s[m] == s[n - m - 1])
		return (answer(s, n, m + 1));

	return (0);
}

