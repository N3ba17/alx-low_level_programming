#include"main.h"
/**
 *cap_string - combine two strings
 *@v: first parameter
 *Return: pointer to char
*/
char *cap_string(char *v)
{
int l = 0, x = 0;
int va[15] = {9, 10, 11, 32, 33, 34, 40, 41, 44, 46, 59, 123, 124};
while (v[l] != '\0')
{
	if (v[l] >= 97 && v[l] <= 122)
	{
		if (l == 0)
		{
			v[l] -= 32;
			continue;
		}
		for (x = 0; x < 15; x++)
		{
			if (v[l - 1] == va[x])
			{
				v[l] -= 32;
			}
		}
	}
l++;
}
return (v);
}
