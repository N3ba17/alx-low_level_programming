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

	if( width < 1 || height < 1)
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
