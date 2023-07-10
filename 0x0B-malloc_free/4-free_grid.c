#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid of array
 * @grid: the grid array .
 * @height: grid height.
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

