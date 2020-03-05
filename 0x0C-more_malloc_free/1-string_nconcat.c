#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: string to copy
 * @s2: strng to add
 * Return: a pointer char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lg, lg2, i, j;
	char *s;

	if (s1 != '\0' && s2 != '\0')
	{
		for (lg = 0; s1[lg] != '\0'; lg++)
		{}
		for (lg2 = 0; s2[lg2] != '\0'; lg2++)
		{}
		if (lg2 >= n)
		{
			s = malloc(sizeof(char) * (lg + n + 1));
			for (i = 0; i < lg; i++)
				s[i] = s1[i];
			for (j = 0; j < n; j++)
				s[lg + j] = s2[j];
		}
		else
		{
			s = malloc(sizeof(char) * (lg + lg2 + 1));
			for (i = 0; i < lg; i++)
				s[i] = s1[i];

			for (j = 0; j < lg2; j++)
				s[lg + j] = s2[j];
		}
	}
	else
	{
		if (s1 != '\0' && s2 == '\0')
		{
			for (lg = 0; s1[lg] != '\0'; lg++)
			{}
			s = malloc(sizeof(char) * (lg + 1));
			if (s == '\0')
				return ('\0');
			for (i = 0; i < lg; i++)
				s[i] = s1[i];
		}
		else if (s1 == '\0' && s2 != '\0')
		{
			s = malloc(sizeof(char) * (n + 1));
			if (s == '\0')
				return ('\0');
			for (lg2 = 0; s2[lg2] != '\0'; lg2++)
			{}
			if (lg2 >= n)
			{
				for (i = 0; i < n; i++)
					s[i] = s2[i];
			}
			else
			{
				for (i = 0; i < lg2; i++)
					s[i] = s2[i];
			}
		}
		else
			s = malloc(0);
	}
	return (s);
}
