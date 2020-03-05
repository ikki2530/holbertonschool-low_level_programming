#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - djaoisjdoias
 * @b: size of the malloc
 * Return: returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == '\0')
		exit(98);

	return (p);
}
