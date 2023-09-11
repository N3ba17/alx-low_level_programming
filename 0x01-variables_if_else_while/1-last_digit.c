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
	int holder = n % 10;

	if (holder > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, holder);
	}
	if (holder == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, holder);
	}
	if (holder < 6 && holder != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, holder);
	}
	return (0);
}
