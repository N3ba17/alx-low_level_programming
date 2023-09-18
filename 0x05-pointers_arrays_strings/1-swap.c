#include "main.h"
/**
 *swap_int - swap value of a and b
 *Return: none
 *@a: first var
 *@b: second var
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
