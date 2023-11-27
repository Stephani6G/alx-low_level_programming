#include "dog.h"
#include <stdio.h>

/**
 * init_dog - characteristics of a dog
 * @p: details of stucture
 *
 * @age: the age of the dog
 * @name: name of  dog
 *
 * @owner: dog owner(1)
 */

void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
}
