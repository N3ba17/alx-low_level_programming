#include<stdio.h>
/**
 * main - this is main fuction
 *
 * Description - main function for displaying all small letters and start here
 *
 * Return: return int  for main function
*/

int main(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
