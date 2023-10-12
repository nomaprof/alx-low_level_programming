#include "search_algos.h"
#include <math.h>

/* ensure math.h is compiled using '-lm' */

size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: the first value
 * @b: the second value
 *
 * Return: Success of Failure (-1)
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - the jump search algorithm used to find value
 * @array: the pointer to the first element in the array
 * @size: the number of elements in the array
 * @value: the desired element to get from the array
 *
 * Return: Success or Failure(-1)
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	/* print the value found after running the algorithm*/
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
