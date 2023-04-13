#include "main.h"

/**
 * _strdup - points to a newly allocated space in memory
 *
 * @str: the string stored at the memory location
 *
 *Return: pointer to the memory location
 */

char *_strdup(char *str)
{
	char *ans;
	int i;
	int m;
	
	if (str == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; str[i]; i++)
	{
		m++;
	}
	ans =  malloc((m + 1) * sizeof(char));
	if (ans == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		ans[i] = str[i];
	}
	ans[m] = '\0';
	return (ans);
	free (ans);
}
