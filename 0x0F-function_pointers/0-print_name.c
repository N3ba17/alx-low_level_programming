#include"main.h"
/**
 *print_name - print name
 *
 *@name: name of pointer
 *@f: pointer to fuction
 *Return: none
*/
void print_name(char *name, void (*f) (char *))
{
	if (name && f)
	{
		f(name);
	}
}
