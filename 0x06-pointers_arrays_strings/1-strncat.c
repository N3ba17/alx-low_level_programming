#include"main.h"
/**
 * _strncat - combine two strings
 *@dest: first parameter
 *@src: second parameter
 *@n: int
 *Return: pointer to char
*/
char *_strncat(char *dest, char *src, int n)
{	
int c1,c2,l;

c1 = 0;
c2 = 0;
while (dest[c1])
{
	c1++;
}
while (src[c2])
{
	c2++;
}
if (n >= c2)
{
	n = c2;
}
for (l = 0; l < n; l++)
{
	dest[c1++] = src[l];
}
return (dest);
}
