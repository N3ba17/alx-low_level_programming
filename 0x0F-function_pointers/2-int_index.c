#include<stddef.h>
#include"function_pointers.h"
/**
*int_index - search for int
*@array:given array
*@size: numbrer of elements in the array
*@cmp: pointer to func
*Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
