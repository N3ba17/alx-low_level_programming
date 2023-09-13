#include "main.h"
/**
 * print_alphabet - just print all character of small letters
 *
 * Description - print_alphabet for print alphabet
 *
 * Return: return int  for main function
*/
void print_alphabet(void);

/**
 * main -this is entry point for main function
 *
 * Description - main function call print_alphabet function
 *
 * Return: return int to system
*/

int main(void)
{
	void print_alphabet(void);
	return (0);
}

void print_alphabet(void)
{
int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * main -this is entry point for main function
 *
 * Description - main function call print_alphabet function
 *
 * Return: return int to system
*/
