#include"main.h"
/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 * Return: pointer to new array
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] !='\0')
	{
		j++;
	}
	str = (char *)malloc(sizeof(char) * (i + j) + 1);
	for (x = 0; x < i; x++)
	{
		str[x]=s1[x];
	}
	for (x = 0; x < j; x++)
	{
		str[i + x] = s2[x];
	}
	str[i + j] = '\0';
	return (str);
}
