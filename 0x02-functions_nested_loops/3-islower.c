#include "main.h"
/**
 * _islower - check if character is lower case
 *
 * Description - 3-islower 10 check if letter is lower case
 *
 *@c: is character rep
 *
 * Return: return int  for main function
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
