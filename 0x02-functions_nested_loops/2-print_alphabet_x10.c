#include "main.h"
/**
 * print_alphabet_x10 - just print all character of small letters 10 times
 *
 * Description - print_alphabet for print alphabet
 *
 * Return: return int  for main function
*/

void print_alphabet_x10(void)
{
int j, i;
	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}

