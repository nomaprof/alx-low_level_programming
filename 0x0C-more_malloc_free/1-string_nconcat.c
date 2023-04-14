#include "main.h"

/**
 * string_nconcat -  concatenate two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: a pointer the concatenation of two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ans;
	unsigned int i, m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		m++;
	}
	ans = malloc(sizeof(char) * (m + 1));
	if (ans == NULL)
	{
		return (NULL);
	}
	m = 0;

	for (i = 0; s1[i]; i++)
	{
		ans[m++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		ans[m++] = s2[i];
	}
	ans[m] = '\0';
	return (ans);
}
