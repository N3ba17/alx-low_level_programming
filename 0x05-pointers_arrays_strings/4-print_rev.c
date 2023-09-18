#include "main.h"
/**
 *print_rev - display string in reverse order
 *@s: string
 *Return: none
 */
void print_rev(char *s)
{
char *tmp = s;

	while (*s != '\0')
	{
		tmp++;
		s++;
	}
	tmp--;
	while (tmp >= s)
	{
		_putchar(*tmp);
		tmp--;
	}
_putchar('\n');
}

