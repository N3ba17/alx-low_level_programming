#include "main.h"
/**
 *puts_half - length of string
 *@str: string var
 *Return: none
 */
void  puts_half(char *str)
{
	int i;

	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	if (len % 2 == 0)
	{
		len = len / 2;
		for (i = 0;i < len;i++)
		{
			_putchar(str[len]);
		}
	}
	if (len % 2 == 0)
	{
		len = (len - 1) / 2;
		for (i = 0;i < len;i++)
		{
			_putchar(str[len]);
		}
	}
}
