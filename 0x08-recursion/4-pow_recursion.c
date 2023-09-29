#include"main.h"
/**
 *_pow_recursion - return the power of x
 *@x: first int
 *@y: second int
 *Return: return power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
