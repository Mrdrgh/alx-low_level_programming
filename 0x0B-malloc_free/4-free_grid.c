#include "main.h"
/**
 * free_grid - free the previously made grid
 * @grid: the grid
 * @height: the height of the grid
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	if (height <= 0)
		return;
	for (; i < height; i++)
		free(grid[i]);
}
