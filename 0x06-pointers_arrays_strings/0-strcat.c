#include"main.h"
/**
 * _strcat - combine two strings
 *@dest: first parameter
 *@src: second parameter
 *Return: pointer to char
*/
char *_strcat(char *dest, char *src)
{
int c1, c2, l;

c1 = 0;
c2 = 0;
while (dest[c2])
{
	c2++;
}
while (src[c1])
{
	c1++;
}
for (l = 0; l < c1; l++)
{
	dest[c2++] = src[l];
}
return (dest);
}
