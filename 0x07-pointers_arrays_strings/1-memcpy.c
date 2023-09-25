#include "main.h"
/**
 *_memcpy - copy memory area
 * Return: pointer to memory address
 *@dest: first item
 *@src: second item
 *@n: third itme
 */

char *_memcpy(char *dest, *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src [i];
	}
	return (dest);
}

