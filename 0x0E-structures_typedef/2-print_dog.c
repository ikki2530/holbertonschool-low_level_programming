#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints info about the dog
 * @d: dog info
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == '\0')
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == '\0')
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
