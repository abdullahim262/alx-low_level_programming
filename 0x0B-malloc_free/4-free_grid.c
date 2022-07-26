nclude "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid created in the alloc_grid
 * @grid: pointer to pointer
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}