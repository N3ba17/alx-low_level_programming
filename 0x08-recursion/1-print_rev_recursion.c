#include"main.h"
/**
 * _print_rev_recursion - print string in reverse
 *@s: string from main
 *Return: none
 */
void _print_rev_recusion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recusion(s+1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
