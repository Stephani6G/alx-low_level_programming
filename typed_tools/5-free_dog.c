#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  a function that frees dog
 * @d: the structure of the dog details
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
