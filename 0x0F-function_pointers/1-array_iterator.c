#include "function_pointers.h"

/**
 * array_iterator - print array elements
 * @array: the array itself
 * @size: size of array
 * @action: the function pointer
 * Return: no value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
