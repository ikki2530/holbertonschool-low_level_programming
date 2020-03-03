#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy
 * @str: string to copy
 * Return: a pointer char
 */
char *_strdup(char *str)
{
	char *ns;
	int i, lg;

	if (str == '\0')
		return ('\0');

	for (lg = 0; str[lg] != '\0'; lg++)
	{
	}
	ns = malloc((lg + 1) * sizeof(char));
	if (ns == '\0')
		return ('\0');

	for (i = 0; i < lg; i++)
	{
		ns[i] = str[i];
	}

	return (ns);

}
