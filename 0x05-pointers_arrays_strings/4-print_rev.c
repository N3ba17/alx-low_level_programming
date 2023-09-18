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
	}
	len--;
	while (tmp >= s)
	{
		_puchar(*tmp);
		tmp--;
	}
_putchar('\n');
}

