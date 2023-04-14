#include "main.h"

/**
 * _realloc - reallocate memory block
 *
 * @*ptr: pointer to the memory previously allocated
 *
 * @old_size: former size of the memory block
 *
 * @new_size: adjusted size of memory block
 *
 * Return: a pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ans, *ans2;
	unsigned int m = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	ans = malloc(new_size);
	ans2 = ptr;
	if (old_size > new_size)
	{
		old_size = new_size;
	}
	for (m = 0; m < old_size; m++)
	{
		ans[m] = ans2[m];
	}
	free(ptr);
	return (ans);
}
