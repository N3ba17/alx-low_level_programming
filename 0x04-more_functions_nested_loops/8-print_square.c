#include "main.h"
/**
 * print_diagonal - print lines
 * Return: no return
 * @n: int from main
 * Description - print line
 */
void print_diagonal(int size)
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
	if( m != size - 1)
	{
		_putchar('\n');
	}
	}
}
_putchar('\n');
}
