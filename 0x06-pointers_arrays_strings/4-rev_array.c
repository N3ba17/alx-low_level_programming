#include"main.h"
/**
 *reverse_array - combine two strings
 *@a: first parameter
 *@n: number of array
 *Return: none
*/
void reverse_array(int *a, int n)
{
int tmp, first, last;

first = 0;
last = n - 1;
while (first < last)
{
	tmp = a[first];
	a[first] = a[last];
	a[last] = tmp;
	first++;
	last--;
}
}
