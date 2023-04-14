#include "main.h"

/**
 * string_nconcat -  concatenate two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: length of string from second argument
 *
 * Return: a pointer the concatenation of two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ans;
	unsigned int i = 0, m = 0, p = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[m])
		m++;
	if (s2 == NULL)
		s2 = "";
	while (s2[p])
		p++;
	if (n >= p)
		n = p;
	ans = malloc(m + n + 1);
	if (ans == NULL)
		return (NULL);
	for (; i < (m + n); i++)
	{
		if (i < m)
		{
			ans[i] = *s1, s1++;
		}
		else
		{
			ans[i] = *s2, s2++;
		}
	}
	ans[i] = '\0';
	return (ans);
}
