#include"main.h"

/**
 * _memset - set characters to 0
 * @s: string
 * @x: 0
 * @n: size
 * Return: none
 */

void *_memset(char *s, char x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = x;
	}
	return (s);
}

/**
 * _calloc - allocate memory
 * @nmemb: first var
 * @size: size
 * Return: none
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = (int *)malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
return (ptr);
}
