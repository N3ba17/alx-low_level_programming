#include "main.h"
/**
 * print_diagonal - print lines
 * Return: no return
 * @n: int from main
 * Description - print line
 */
void print_diagonal(int n)
{
int i, m;

if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		for (m = 0; m < n; m++)
		{
			_putchar('#');
		}
	if( m != n - 1)
	{
		_putchar('\n');
	}
	}
}
_putchar('\n');
}
