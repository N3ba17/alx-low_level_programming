#include"main.h"
/**
 *is_prime_number - container for checker function
 *@n: first parameter
 *Return: int
*/
int is_prime_number(int n)
{
	return (check_for_prime(n, 2));
}
/**
 * check_for_prime - checker
 *@n: int from main
 *@x: counter
 *Return: int
 */
int check_for_prime(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	if (x < n)
	{
		if (n % x == 0)
		{
			return (0);
		}
		return (check_for_prime(n, (x + 1)));
	}
	return (1);
}
