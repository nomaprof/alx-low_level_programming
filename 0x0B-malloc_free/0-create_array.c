#include "main.h"

/**
 * create_array - creates an array
 *
 * @size: the size of the array
 *
 * @c: the character
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ans;
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		ans = malloc(sizeof(char) * size);
		if (ans == NULL)
		{
			return (NULL);
		}
		ans[0] = 'A';
		i++;
	}
	return (ans);
}

