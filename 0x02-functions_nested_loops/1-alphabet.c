#include "main.h"
/**
 * print_alphabet - just print all character of small letters
 *
 * Description - print_alphabet for print alphabet
 *
 * Return: return int  for main function
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
