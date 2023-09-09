#include<stdio.h>

/**
 * main - this is the main fuction of this code
 *
 * Description - for main function starts here
 *
 * Return: main returns int
 */

int main(void)
{
	printf("Size of a char:%lu bytes(s)\n", sizeof(char));
	printf("Size of an int:%lu bytes(s)\n", sizeof(int));
	printf("Size of a long int:%lu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int:%lu bytes(s)\n", sizeof(long long));
	printf("Size of a float:%lu bytes(s)\n", sizeof(float));
	return (0);
}
