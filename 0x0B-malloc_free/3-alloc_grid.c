#include "main.h"

/**
 * alloc_grid - a two-dimensional array of integers
 *
 * @width: the x input
 *
 * @height: the y input
 *
 * Return: a pointer to the answer
 */

int **alloc_grid(int width, int height)
{
	int **ans;
	int m = 0;
	int n = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ans = (int **) malloc(sizeof(int *) * height);
	if (ans == NULL)
	{
		return (NULL);
		free(ans);
	}
	for (; m < height; m++)
	{
		ans[m] = (int *)malloc(sizeof(int) * width);
		if (ans[m] == NULL)
		{
			return (NULL);
			free(ans);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (; n < width; n++)
		{
			ans[m][n] = 0;
		}
	}
	return (ans);
}
