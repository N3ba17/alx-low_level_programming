#include<stdarg.h>
/**
* sum_them_all - sum all args
*@n: number counter
*Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list np;
	unsigned int p, sum = 0;

	va_start(np, n);
	for (p = 0; p < n; p++)
	{
		sum = sum + va_arg(np, int);
	}
	va_end(np);
	return (sum);
}
