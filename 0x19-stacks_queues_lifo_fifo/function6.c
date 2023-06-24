#include "monty.h"
/**
 * _calloc - joining two strings together
 * @nmemb: total number of elements
 * @size: the data type of the elements
 * Return: no value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	unsigned int m;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < (nmemb * size); m++)
	{
		*((char *)(p) + m) = 0;
	}
	return (p);
}
/**
 * _realloc - change the size of memory allocated
 * @ptr: pointer to reallocation
 * @old_size: old size
 * @new_size: new size
 * Return: no value
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		for (m = 0; m < old_size; m++)
			p[m] = *((char *)ptr + m);
		free(ptr);
	}
	else
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		for (m = 0; m < new_size; m++)
			p[m] = *((char *)ptr + m);
		free(ptr);
	}
	return (p);
}
