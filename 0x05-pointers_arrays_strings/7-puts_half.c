#include "main.h"
i/**
 *puts_half - length of string
 *@str: string var
 *Return: none
 */
void  puts_half(char *str)
{
	int i;

	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	if (len % 2 == 0)
	{
		len = len / 2;
		for (i = 0;i < len;i++)
		{
			_putchar(str[i]);
		}
	}
	if (len % 2 == 0)
	{
		len = (len - 1) / 2;
		for (i = 0;i < len;i++)
		{
			_putchar(str[i]);
		}
	}
}
