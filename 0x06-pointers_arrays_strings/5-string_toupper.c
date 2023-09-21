#include"main.h"
/**
 *string_toupper - change to lower case
 *@value:pointer to - upper
 *Return: pointer to char
*/
char *string_toupper(char *value)
{
int a, i;

a = 0;
while (value[a] != '\0')
{
	a++;
}
for (i = 0;i < a; i++)
{
	if (value[i] >= 97 && value[i] <= 122)
	{
		value[i] = value[i] - 32;
	}
}
return (value);
}
