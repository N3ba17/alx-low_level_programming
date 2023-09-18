#include "main.h"
/**
 *_puts2 - length of string
 *@str: string var
 *Return: none
 */
void _puts2(char *str)
{
	int i;

	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}
_putchar('\n');
}
