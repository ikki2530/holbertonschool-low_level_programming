#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - copies the string pointed to by src
 * @dest: where string will be copy
 * @src: string to copy
 * @n: amount of chars to copy
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lg;
	int j;
	int i;

	for (lg = 0; src[lg] != '\0'; lg++)
	{

	}

	if (n <= lg)
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}
	}
	else
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[j] = src[j];
		}

		for (i = j; i < n; i++)
		{
			dest[i] =  '\0';
		}
	}

	return (dest);
}
