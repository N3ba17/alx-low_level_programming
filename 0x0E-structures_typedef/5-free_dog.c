#include"dog.h"
/**
 *free_dogs - free dogs
 *@d: dogs
 */
void free_dogs(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
