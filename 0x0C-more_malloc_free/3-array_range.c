#include "main.h"

/**
 * array_range - array of integers
 *
 * @min: minimum value in the range
 *
 * @max: maximum value in the range
 *
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ans;
	int m, n;

	if (min > max)
	{
		return (NULL);
	}

	m = max - min;
	ans = malloc(sizeof(int) * (m + 1));
	if (ans == NULL)
	{
		return (NULL);
	}
	for (n = 0; n <= m; n++)
	{
		ans[n] = min++;
	}
	return (ans);
}
