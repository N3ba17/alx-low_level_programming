#include "main.h"
/**
 *puts_half - length of string
 *@str: string var
 *Return: none
 */
void puts_half(char *str)
{
	int i, ful;
	char *new = str;


	int len = 0;

	while (*new != '\0')
	{
		len++;
		new++;
	}
	ful = len;
	if (len % 2 == 0)
	{
		len = len / 2;
		for (i = len; i < ful; i++)
		{
			_putchar(str[i]);
		}
	}
	if (len % 2 == 1)
	{
		len = (len - 1);
		len = len / 2;
		for (i = len + 1; i < ful; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
