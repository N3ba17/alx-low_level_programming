#include <stdlib.h>
#include <stdio.h>
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

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, n % 10);
	}
	if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, n % 10);
	}
	return (0);
}
