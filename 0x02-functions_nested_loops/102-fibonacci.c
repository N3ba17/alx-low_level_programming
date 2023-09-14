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
long int i, j, k, temp;

	i = 0;
	k = 1;
	for (j = 0; j <= 49; j++)
	{
		temp = i + k;
		printf("%ld, ", temp);
		i = k;
		k = temp;
	}
putchar('\n');
return (0);
}

