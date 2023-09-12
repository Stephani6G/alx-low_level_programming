#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog characteristics
 * @age: the age of the dog
 * @name: name of the dog
 * @owner: dog owner(1)
 */

struct dog 
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *p, char *name, float age, char *owner);
void print_dog(struct dog *p);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
