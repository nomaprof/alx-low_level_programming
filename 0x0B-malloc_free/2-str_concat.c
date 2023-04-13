#include "main.h"

/**
 * str_concat - concatenate two strings
 *
 * @s1: the first string
 *
 * @s2: the second string
 *
 * Return: pointer to newly allocated space for answer
 */

char *str_concat(char *s1, char *s2)
{
	int i, m = 0, n = 0;
	char *ans;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		n++;
	}
	ans = malloc(sizeof(char) * n);
	if (ans == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ans[m++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		ans[m++] = s2[i];
	}
	return (ans);
}
