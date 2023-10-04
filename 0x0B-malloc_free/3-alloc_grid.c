#include"main.h"
/**
 * alloc_grid - allocate pointer to array
 * @width: first var
 * @height: second var
 * Return: return pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	array = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(height * sizeof(int));
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
