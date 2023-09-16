#include "main.h"
/**
 * _isupper - check if upper case
 * @c : integer
 * Return: int 1 if true and  0 if false
 * Description - check if c is upper case
 */
int _isupper(int c)
{
	if (c > 65 || c < 0)
	{
		return (1);
	}
	else
		return (0);
}
