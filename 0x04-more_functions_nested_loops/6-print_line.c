#include "main.h"
/**
 * print_line - check if upper case
 * Return: no return
 * @n: int from main
 * Description - print line
 */
void print_line(int n)
{
int i;

if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
}
_putchar('\n');
}
