#include "holberton.h"
/**
 * _strcat - add the string src to dest
 * @dest: main string
 * @src: string to add
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int lg;
	int j;

	for (lg = 0; dest[lg] != '\0'; lg++)
	{

	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[lg + j] = src[j];
	}
	dest[lg + j] = '\0';

	return (dest);

}
