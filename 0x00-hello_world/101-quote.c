#include<stdio.h>
#include<unistd.h>
/**
 * main -this is main fucntion of program
 *
 * Description - for main fucntion starts here
 *
 * Return: main return int 1
*/
int  main(void)
{
	char qoute[] = "and that piece of art is useful\" -Dora korpar, 2015-10-19\n";

	write(1, qoute, 59);
	return (1);
}
