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
int j, result;

	for (j = 0; j <= 1024; j++)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			result = result + j;
		}
	}
printf("%d\n", result);
return (0);
}

