#include "main.h"

/**
 *rev_string -reverse order of string
 *@s: parameter
 *Retun: none
 */
void rev_string(char *s)
{
	char tmp;
	int i;

	int len = 0;

	while (*s != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
