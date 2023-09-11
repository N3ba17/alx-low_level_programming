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
	int i, j, counter;

	counter = 49;
	for (i = 48; i <= 57; i++)
	{
		for (j = counter; j <= 57; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (counter != 57)
				{
					putchar(44);
					putchar(32);
				}
				if (counter == 57)
				{
					putchar('\n');
				}

			}
		}
		counter++;
	}
	return (0);
}
