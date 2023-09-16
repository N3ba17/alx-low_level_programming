#include "main.h"
/**
 * print_triangle - print triangle
 * Return: no return
 * @size: int from main
 * Description - print triangle
 */
void print_triangle(int size)
{
int i, j, m, n;

n = 1;
m = size - 1;
if (size > 0)
{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < m; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		if (i != size - 1)
		{
			_putchar('\n');
		}
		m--;
		n++;
	}
}
_putchar('\n');
}
