#include"main.h"
/**
 * array_range - array of int
 * @min: min
 * @max: max
 * Return: new array
*/
int *array_range(int min, int max)
{
	int i;
	int *new;

	if (min > max)
	{
		return (NULL);
	}
	new = malloc(sizeof(int) * (max - min + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		new[i] = min;
		min++;
	}
	return (new);
}
