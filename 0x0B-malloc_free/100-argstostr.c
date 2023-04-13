#include "main.h"

/**
 * argstostr - concatenates all arguments
 *
 * @ac: counts the arguments
 *
 * @av: indexes of arguments
 *
 * Return: a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *ans;
	int b = 0, m = 0, n, p;
	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			b++;
		}
		b++;
	}

	b++;
	ans = malloc(b * sizeof(char));
	if (ans == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			ans[p] = av[m][n];
			p++;
		}
		ans[p] = '\n';
		p++;
	}
	ans[p] = '\0';
	return (ans);
}

