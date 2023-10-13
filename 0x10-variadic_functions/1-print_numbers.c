#include<stdarg.h>
#include<stdio.h>
/**
* print_numbers - sum all args
*@n: number counter
*@separator: -
*Return: none
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list np;
	unsigned int i;

	va_start(np, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(np, int));
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(np);
	printf("\n");
}
