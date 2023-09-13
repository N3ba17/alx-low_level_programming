#include "main.h"
/**
 * print_last_digit - absolute value
 *
 * Description - 3-islower 10 check if letter is lower case
 *
 *@c: is int
 *
 * Return: return int  for main function
*/

int print_last_digit(int c)
{
int temp;
	if (c >= 0)
	{
		temp = c % 10;
	}
	if (c < 1)
	{
		temp = c * -1;
	}
_putchar(temp+48);
return (0);
}
