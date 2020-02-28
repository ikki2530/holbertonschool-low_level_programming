#include "holberton.h"
/**
 * _memcpy - copy a part a string into another one
 * @dest: destination
 * @src: string to be copy
 * @n: number of chars of src string to be copy in dest
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
