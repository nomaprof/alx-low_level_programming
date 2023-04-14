#include "main.h"

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: array
 *
 * @size: byte size of each element
 *
 * Return: a pointer to allocated memory with array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int m = 0;
	char *ans;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ans = malloc(nmemb * size);
	if (ans == NULL)
	{
		return (NULL);
	}
	for (; m < nmemb * size; m++)
	{
		*(ans + m) = 0;
	}
	return (ans);
}
