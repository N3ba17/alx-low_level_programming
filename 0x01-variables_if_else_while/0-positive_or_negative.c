#include<stdio.h>
#include<stdlib.h>
#include <time.h>

/**
 * main - this is the main fuction of this code
 *
 * Description - for main function starts here
 *
 * Return: main returns int
 */

int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative",n);
	}
	if (n == 0)
	{
		printf("%d is zero",n);
	}
	if (n > 0)
	{
		printf("%d is posetive",n);
	}

	return (0);
}
