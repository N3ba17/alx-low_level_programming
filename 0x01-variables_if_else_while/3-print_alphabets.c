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
	int character;

	for (character = 97; character <= 122; character++)
	{
		putchar(character);
	}
	for (character = 65; character <= 90; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
