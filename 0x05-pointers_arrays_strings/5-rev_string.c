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
	char *p = s;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	for (i = 0; i < len; i++)
	{
		len--;
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
}
