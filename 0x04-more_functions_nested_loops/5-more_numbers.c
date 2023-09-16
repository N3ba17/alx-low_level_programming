#include "main.h"
/**
 * more_numbers - check if upper case
 * Return: no return
 * Description - print number
 */
void more_numbers(void)
{
int i, j, k;

k = 10;
for (j = 0; j < 10; j++)
{
	for (i = 0; i < 14; i++)
	{
		if (i <= 9)
		{
			_putchar(i);
		}
		else
		{
			_putchar(k);
			k++;
		}
	}
	k = 10;
	_putchar('\n');
}
}
