#include "main.h"
/**
 * print_diagonal - print lines
 * Return: no return
 * @n: int from main
 * Description - print line
 */
void print_diagonal(int n)
{
int i;

if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		_putchar(92);
	}
}
_putchar('\n');
}
