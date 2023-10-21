#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - create a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: NULL if the function fails
*/


dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);

		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	p->name = malloc(i + 1);

	p->owner = malloc(j + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		p->name[k] = name[k];
	}
	p->name[k] = '\0';

	for (k = 0; k < j; k++)
	{
		p->owner[k] = owner[k];
	}
	p->owner[k] = '\0';

	p->age = age;

	return (p);
}
