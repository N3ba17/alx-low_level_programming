#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
if (argc != 2)
{
	printf("Error\n");
	return (1);
}
int i, cents, x;
int test[5] = {25, 10, 5, 2, 1};

x = atoi(argv[1]);
for (i = 0; i < 5; i++)
{
	while (x >= test[i])
	{
		x = x - test[i];
		cents += 1;
	}
}
printf("%d\n", cents);

return (0);
}
