#include"main.h"
/**
 * free_grid - free the grid setup previous
 *@grid: first argument
 *@height: second argument
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
	{
		return;
	}
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
