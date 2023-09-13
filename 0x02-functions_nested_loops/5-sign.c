#include "main.h"
/**
 * print_sign - check if character is lower case
 *
 * Description - 3-islower 10 check if letter is lower case
 *
 *@c: is int
 *
 * Return: return int  for main function
*/

int print_sign(int c)
{
	if (c > 1)
	{
		return (1);
	}
	if (c == 0)
	{
		return (0);
	}
	else
		return (-1);
}
