#include "main.h"
/**
 *puts2 - length of string
 *@str: string var
 *Return: none
 */
void puts2(char *str)
{
	int i = 0;
	char *t = str;

	while (t[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
_putchar('\n');
}
