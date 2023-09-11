#include <stdio.h>
#include <stdio.h>
/**
 * main - this is main fuction
 *
 * Description - main function for displaying all small letters and start here
 *
 * Return: return int  for main function
 */

int main(void)
{
	int i, j, k, counter1, counter2, counter3;

	counter1 = 49;
	counter3 = 0;
	for (i = 48; i <= 57; i++)
	{
		counter2 = 50 + counter3;
		for (j = counter1; j <= 57; j++)
		{
			for (k = counter2; k <= 57; k++)
			{
				if (i != j && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (counter3 != 7)
					{
						putchar(44);
					}
				}
			}
		counter2++;
		}
	counter1++;
	counter3++;
	}
putchar('\n');
return (0);
}
