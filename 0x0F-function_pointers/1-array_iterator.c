#include"function_pointers.h"
/**
 * array_iterator - looping though array
 *@array: the array
 *@size: size
 *@action: pointer
 *Return: none
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
