#include "main.h"
/**
 *_memset - fill memory with constant byte
 *@s: first item
 *@b: second item
 *@n: third item
 *Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
