#include "main.h"
/**
 *print_array - length of string
 *@a: string var
 *@n: number of indez
 *Return: none
 */
void print_array(int *a, int n)
{
	int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < n - 1)
			{
				printf(", ");
			}
		}
	printf("\n");
}
