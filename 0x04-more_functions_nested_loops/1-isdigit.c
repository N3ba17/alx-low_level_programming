#include "main.h"
/**
 * _isdigit - check if upper case
 * @c : integer
 * Return: int 1 if true and  0 if false
 * Description - check if c is upper case
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
