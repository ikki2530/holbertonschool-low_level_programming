#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - copies the string pointed to by src
 * @dest: where string will be copy
 * @src: string to copy
 * @n: n bytes to be used of src
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int lg;
	int i;

	for (lg = 0; src[lg] != '\0'; lg++)
	{

	}
	lg--;
	printf("valor lg %i\n", lg);

	if (n <= lg)
	{
		for (i = 0; i < n; i++)
		{
			dest[lg + i] = src[i];
		}
	}
	else
	{
		for (i = 0; i != '\0'; i++)
		{
			dest[lg + i] = src[i];
		}
		dest[lg + i] = '\0';
	}
	printf("valor i %i\n", i);

	for(j = 0; j
	return (dest);

}
