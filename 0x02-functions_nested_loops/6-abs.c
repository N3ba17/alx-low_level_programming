#include "main.h"
/**
 * _abs - absolute value
 *
 * Description - 3-islower 10 check if letter is lower case
 *
 *@c: is int
 *
 * Return: return int  for main function
*/

int _abs(int c)
{
int temp;
	if (c >= 1)
	{
		return (c);
	}
	if (c == 0)
	{
		return (0);
	}
	if (c < 1)
	{
		temp = c * -1;
		return (temp);
	}
return (0);
}
