#include "main.h"
/**
 * alloc_grid - allocate a mem to a 2 dims grid
 * @width: self explanatory
 * @height: whatever
 * Return: the pointer to the grid
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(sizeof(int *) * width);
	if (!grid)
		return (NULL);
	for (; i < width; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * height);
		if (!grid[i])
			return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*(grid[i] + j) = 0;
		}
	}
	return (grid);
}

