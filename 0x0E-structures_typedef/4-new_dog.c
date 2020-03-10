#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize structure dog
 * @d: pointer to dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dg;

	dg = malloc(sizeof(struct dog));
	if (dg == NULL)
	{
		free(dg);
		return (NULL);
	}

	dg->name = name;
	dg->age = age;
	dg->owner = owner;

	return (dg);
}
