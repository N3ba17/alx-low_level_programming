#include "main.h"
/**
 *print_rev - display string in reverse order
 *@s: string
 *Return: none
 */
void print_rev(char *s)
{
int i;
int tmp = 0;

	while (*s != '\0')
	{
		tmp++;
		s++;
	}
	s--;
	for (i = tmp; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
_putchar('\n');
}

