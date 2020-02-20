#include "holberton.h"
#include <stdio.h>
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
	int i;

	for (lg = 0; dest[lg] != '\0'; lg++)
	{

	}
	printf("lg %i\n", lg);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[lg + j] = src[j];
	}
	printf("j %i\n", j);
	dest[lg + j] = '\0';

	for (i = 0; i < (lg + j); i++)
	{
		printf("%c", dest[i]);
	}

	return (dest);

}
