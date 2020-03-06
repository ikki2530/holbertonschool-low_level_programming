#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - allocates memory using malloc
 * @ptr: pointer to the array
 * @old_size: old size of our ptr
 * @new_size: new size of our new pointer
 * Return: - a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *s2;
	unsigned int i;

	s = ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	s2 = malloc(new_size);
	if (s2 == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		return (s2);
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			s2[i] = s[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			s2[i] = s[i];
	}

	free(ptr);
	return (s2);
}
