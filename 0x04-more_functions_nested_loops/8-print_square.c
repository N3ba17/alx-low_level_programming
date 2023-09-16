#include "main.h"
/**
 * print_square - print squares
 * Return: no return
 * @size: int from main
 * Description - print line
 */
void print_square(int size)
{
int i, m;

if (size > 0)
{
	for (i = 0; i < size; i++)
	{
		for (m = 0; m < size; m++)
		{
			_putchar('#');
		}
		if (i != size - 1)
		{
			_putchar('\n');
		}
	}
}
_putchar('\n');
}
