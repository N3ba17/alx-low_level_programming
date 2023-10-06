#include"main.h"
/**
 *string_nconcat - concatenates two string
 *@s1: first string
 *@s2: second string
 *@n: int
 *Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, x;
	char *new_p;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (j >= n)
	{
		j = n;
	}
	new_p = malloc(sizeof(char) * (i + j + 1));
	for (x = 0; x < i; x++)
	{
		new_p[x] = s1[x];
	}
	for (x = 0; x < j; x++)
	{
		new_p[i + x] = s2[x];
	}
	new_p[i + j] = '\0';
	return (new_p);
}
