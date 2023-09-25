#include "main.h"
/**
 *_strchr - location a character in string
 *@s: first item
 *@c: second item
 *Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	return (s);
	}
}
