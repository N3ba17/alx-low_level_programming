#include<stdarg.h>
#include<stdio.h>
/**
*print_strings - string printer
*@n: number counter
*@separator: -
*Return: none
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list np;
	unsigned int i;
	char *ptr;

	va_start(np, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(np, char *);
		if (ptr)
		{
			printf("%s", ptr);
		}
		else
		{
			printf("%s", separator);
		}
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(np);
	printf("\n");
}

