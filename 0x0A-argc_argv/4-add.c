#include<stdio.h>
#include<stdlib.h>
/**
 *main - mul
 *@argc: int
 *@argv:char
 *Return: int
*/
int main(int argc, char *argv[])
{
	int i, z, sum;

for (i = 1 ; i < argc; i++)
{
	z = *argv[i];
	if (z > 47 && z < 58)
	{
		sum += atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
	printf("%d\n", sum);
	return (0);
}
