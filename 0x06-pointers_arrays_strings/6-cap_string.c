#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - capitalize a string
 * @c: string to evaluate
 * Return: string uppercase
 */
char *cap_string(char *c)
{
	int i;
	int val;

	for (i = 0; c[i] != '\0'; i++)
	{
		printf("char %c %i \n", c[i], c[i] - '0');
		if (c[0] >= 97 && c[0] <= 122)
			c[0] = c[0] - 32;

		val = c[i] - '0';
		if (val == 77 || val == 75 || val == -7 || val == -8 ||
		    val == -14 || val == 15 || val == -15 || val == -2 ||
		    val == 11 || val == -4 || val == -38 || c[i] == -16 ||
		    c[i] == -39)
		{
			c[i + 1] = c[i] - 32;
		}
	}

	return (c);
}
