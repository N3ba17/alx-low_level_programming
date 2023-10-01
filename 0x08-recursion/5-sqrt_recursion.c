#include "main.h"
/**
 *_sqrt_recursion - check for square root
 *@n: first int from main
 *Return: int
*/
int _sqrt_recursion(int n)
{
	int x = checker(n, 1);

	return (x);
}
/**
 *checker - increamentaly check for n in x
 *@n: first var
 *@x: second var
 *Return: int
 */
int checker(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < (x * x))
	{
		return (-1);
	}
	if (n == (x * x))
	{
		return (x);
	}
	else
		return (checker(n, (x + 1)));
}
