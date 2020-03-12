#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - initialize structure dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	int lg, lg2, i, j;

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	for (lg = 0; name[lg] != '\0'; lg++)
	{}
	for (lg2 = 0; owner[lg2] != '\0'; lg2++)
	{}
	dg->name = malloc(sizeof(char) * (lg + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * (lg2 + 1));
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	for (i = 0; i < lg; i++)
		dg->name[i] = name[i];
	for (j = 0; j < lg2; j++)
		dg->owner[j] = owner[i];
	dg->name[i] = '\0';
	dg->owner[j] = '\0';
	(*dg).age = age;
	return (dg);
}
