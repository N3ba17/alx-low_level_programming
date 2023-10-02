#include<stdio.h>
#include<stdlib.h>
/**
 *main - mul
 *@argc: int
 *@argv:char
 *Return: int
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d \n", x * y);
	return (0);
}
