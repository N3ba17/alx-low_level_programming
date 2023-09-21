#include"main.h"
/**
 * _strcmp - combine two strings
 *@s1: first parameter
 *@s2: second parameter
 *Return: int
*/
int _strcmp(char *s1, char *s2)
{
int l, result;
l = 0;
result = 0;
while (s1[l] != '\0' && s2[l] != '\0')
{
	if (s1[l] != s2[l])
	{
		result = s1[l] - s2[l];
		break;
	}
	l++;
}
return (result);
}
