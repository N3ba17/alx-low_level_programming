#include"main.h"
/**
 * _strncpy - combine two strings
 *@dest: first parameter
 *@src: second parameter
 *@n: int
 *Return: pointer to char
*/
char *_strncpy(char *dest, char *src, int n)
{
int c1, c2, l;

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
for (l = 0; l < n && src[l] != '\0'; l++)
{
	dest[l] = src[l];
}
while (l < n)
{
	dest[l] = '\0';
	l++;
}
return (dest);
}
