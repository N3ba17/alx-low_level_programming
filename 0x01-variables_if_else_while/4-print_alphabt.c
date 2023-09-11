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
		if (character != 101 && character != 113)
		{
			putchar(character);
		}
	}
	putchar('\n');
	return (0);
}
