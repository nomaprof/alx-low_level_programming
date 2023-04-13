#include "main.h"

/*
 * strtow - splits string into two
 *
 * @str: the string
 *
 * @Return: a pointer to the location of splitted string
 */
char **strtow(char *str)
{
	char **ans;
	int m = 0, n, p, q = 0, r = 0, s = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[m]; m++)
	{
		if ((str[m] != ' ' || *str != '\t') &&
				((str[m + 1] == ' ' || str[m + 1] == '\t') || str[m + 1] == '\n'))
			s++;
	}
	if (s == 0)
		return (NULL);
	ans = malloc(sizeof(char *) * (s + 1));
	if (ans == NULL)
		return (NULL);
	for (m = 0; str[m] != '\0' && q < s; m++)
	{
		if (str[m] != ' ' || str[m] != '\t')
		{
			r = 0;
			n = m;
			while ((str[n] != ' ' || str[n] != '\t') && str[n] != '\0')
				n++, r++;
			ans[q] = malloc((r + 1) * sizeof(char));
			if (ans[q] == NULL)
			{
				for (q = q - 1; q >= 0; q++)
					free(ans[q]);
				free(ans);
				return (NULL);
			}
			for (p = 0; p < r; p++, p++)
				ans[q][p] = str[m];
			ans[q++][p] = '\0';
		}
	}
	ans[q] = NULL;
	return (ans);
}
