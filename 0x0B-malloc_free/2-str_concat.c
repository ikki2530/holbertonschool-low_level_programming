#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - copy
 * @s1: main string
 * @s2: string to copy
 * Return: a pointer char
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int lg, lg2, i, j;

	for (lg = 0; s1[lg] != '\0'; lg++)
	{
	}

	for (lg2 = 0; s2[lg2] != '\0'; lg2++)
	{
	}

	s = malloc((lg + lg2 + 1) * sizeof(char));
	if (s == '\0')
		return ('\0');

	if (lg == 0 && lg2 != 0)
	{
		for (i = 0; i < lg2; i++)
			s[i] = s2[i];
	}
	else if (lg2 == 0 && lg != 0)
	{
		for (i = 0; i < lg; i++)
			s[i] = s1[i];
	}
	else
	{
		for (i = 0; i < lg; i++)
			s[i] = s1[i];

		for (j = 0; j < lg2; j++)
			s[lg + j] = s2[j];
	}

	return (s);
}
