#include"dog.h"
/**
 * init_dog - initialze the dog struct
 * @d: the dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
