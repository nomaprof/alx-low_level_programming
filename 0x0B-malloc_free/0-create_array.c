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
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ans = malloc(sizeof(char) * size);
	if (ans == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ans[i] = c;
	}

	return (ans);
}
