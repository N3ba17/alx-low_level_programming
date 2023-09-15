#include <stdio.h>
/**
 * main - print sum of number that are divisible by 3 and 5
 *
 * Description - print_alphabet for print alphabet
 *
 * Return: return int
*/

int main(void)
{
long int i, j, k, temp, sum;
	sum = 0;
	temp = 0;
	i = 0;
	k = 1;
	for (j = 0; j <= 49; j++)
	{
		while (temp < 4000000)
		{
			temp = i + k;
			if (temp % 2 == 0)
			{
				sum = sum + temp;
			}
			i = k;
			k = temp;
		}
	}
printf("%ld", sum);
putchar('\n');
return (0);
}

