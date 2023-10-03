#include<stdio.h>
#include"main.h"
/**
 *create_array - array of char
 *@size: size of array
 *@c: what char to insert
 *Return: retun c
 */
char *create_array(unsigned int size, char c)
{
int i;
char *assign;

assign = malloc(sizeof(c) * size);
if (size == 0)
{
	return (NULL);
}
if (assign == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	assign[i] = c;
}

return (assign);
}
