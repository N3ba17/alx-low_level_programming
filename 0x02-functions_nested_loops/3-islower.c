#include "main.h"
/**
 * _islower - check if character is lower case
 *
 * Description - print_alphabet 10  print alphabet
 *
 * Return: return int  for main function
*/

int _islower(int c)
{
	if(c >=97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
