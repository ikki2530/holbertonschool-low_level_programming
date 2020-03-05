#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the malloc
 * Return: returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	float *p;
	p = malloc(b);
	if (p == '\0')
		exit (98);

	return (p);
}
