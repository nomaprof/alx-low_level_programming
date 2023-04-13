#include "main.h"

/**
 * free_grid - free the grid
 *
 * @grid: width
 *
 * @height: y axis of grid
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}

	free(grid);
}

