#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - convert a string to upper
 * @c: string to evaluate
 * Return: string uppercase
 */
char *string_toupper(char *c)
{
	int lg;
	int i;
	int val;

	for (lg = 0; c[lg] != '\0'; lg++)
	{

	}

	for (i = 0; i < lg; i++)
	{
		val = c[i] - '0';
		printf("c[i] %i %c\n", i, c[i]);
		printf("val %i\n\n", val);
		if (val >= 49 && val <= 74)
		{
			val = val - 32;
			c[i] = val + '0';
		}
	}

	return (c);
}
