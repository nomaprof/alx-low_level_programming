#include "main.h"

/**
 * malloc_checked - allocate memory
 *
 * @b: the value
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ans;

	ans = malloc(b);

	if (ans == NULL)
	{
		exit(98);
	}
	return (ans);
}
