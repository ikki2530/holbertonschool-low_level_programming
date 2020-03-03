#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars, and initiazlizes it with a char
 * @size: size of the array
 * @c: first char
 * Return: a pointer char or null if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *v;

	if (size == 0)
		return ('\0');

	v = malloc(size * sizeof(char));

	if (v == '\0')
		return ('\0');

	for (i = 0; i < size; i++)
	{
		v[i] = c;
	}

	return (v);
}
