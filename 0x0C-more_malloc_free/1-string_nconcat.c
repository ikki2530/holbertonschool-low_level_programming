#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: string to copy
 * @s2: strng to add
 * @n: numbers of bytes of the s2 string
 * Return: a pointer char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int lg, lg2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (lg = 0; s1[lg] != '\0'; lg++)
	{}

	for (lg2 = 0; s2[lg2] != '\0'; lg2++)
	{}

	if (n >= lg2)
		n = lg2;

	s = malloc(lg + n + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < (lg + n); i++)
	{
		if (i < lg)
			s[i] = s1[i];
		else
			s[i] = s2[i - lg];
	}

	return (s);
}
