#include "main.h"
/**
 *_sprspn - length of prefix substring
 *@s: first item
 *@accept: seconde item
 *Return: int
 */
unsigned int _sprspn(char *s, char *accept)
{
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		z = 0;
		while (accept [y] != '\0')
		{
			if (s[x] == accept [y])
			{
				z = 1;
				break;
			}
			y++;
		}
		if ( z == 0)
		{
			break;
		}
		x++;
	return (x);
	}
}
