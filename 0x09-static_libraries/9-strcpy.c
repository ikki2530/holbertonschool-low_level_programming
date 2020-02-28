#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: where string will be copy
 * @src: string to copy
 * Return: dest string
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	int j;

	for (x = 0; src[x] != '\0'; x++)
	{

	}

	for (j = 0; j <= x; j++)
	{
		dest[j] = src[j];
	}

	return (dest);

}
