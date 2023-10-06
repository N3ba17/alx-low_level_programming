#include"main.h"
/**
 * malloc_checked - allocate memory
 *@b: size
 *Return: none
 */
void *malloc_checked(unsigned int b)
{
	void *new_p;
	new_p = malloc(b);
	if (new_p == NULL)
	{
		exit(98);
	}
return (new_p);
}
