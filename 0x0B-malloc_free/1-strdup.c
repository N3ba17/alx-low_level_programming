#include"main.h"
/**
 *_strdup - returns pointer to newly allocated space in memory
 *@str: string from main
 *Return: pointer
 */
char *_strdup(char *str)
{
char *assign;
unsigned int i;
unsigned int x = 0;

if (str == NULL)
{
	return (NULL);
}
while (str[x] != '\0')
{
	x++;
}
assign = (char *) malloc(x + 1);
if (assign == NULL)
{
	return (NULL);
}
for (i = 0; i <= x; i++)
{
	assign[i] = str[i];
}
return (assign);
}
