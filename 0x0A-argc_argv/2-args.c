#include<stdio.h>
/**
 *main - return argc
 *@argc: int
 *@argv:char
 *Return: int
*/
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s \n", argv[x]);
		x++;
	}
	return (0);
}
