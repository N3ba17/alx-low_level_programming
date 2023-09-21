#include"main.h"
/**
 *cap_string - combine two strings
 *@v: first parameter
 *Return: pointer to char
*/
char *cap_string(char *v)
{
int l = 0;
while (v[l] != '\0')
{
	if (v[l] >= 97 && v[l] <= 122)
	{
		if (l == 0)
		{
			v[l] -= 32;
		}
		if (v[l - 1] == 9 || v[l - 1] == 10 || v[l - 1] == 32 || v[l - 1] == 33 || v[l - 1] == 34 || v[l - 1] == 40 ||v[l - 1] == 41 || v[l - 1] == 44 || v[l - 1] == 46 || v[l - 1] == 59 || v[l - 1] == 63 || v[l - 1] == 123 || v[l - 1] == 124)
		{
			v[l] -= 32;
		}
	}
l++;
}
return (v);
}
