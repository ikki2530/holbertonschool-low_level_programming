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
	int band = 0;
	char may;

	for (i = 0; c[i] != '\0'; i++)
	{
		printf("char %c %i \n", c[i], c[i] - '0');
		if (c[0] >= 97 && c[0] <= 122)
			c[0] = c[0] - 32;

		if (band == 1)
                {
                        if (val >= 49 && val <= 74)
                        {
                                may = val - 32;
                                c[i] = may;
                        }
                        else
                                band = 0;
                }
		val = c[i] - '0';
		if (val == 77 || val == 75 || val == -7 || val == -8)
			band = 1;
		else if (val == -14 || val == 15 || val == -15 || val == -2)
			band = 1;
		else if (val == 11 || val == -4 || val == -38 || c[i] == -16)
			band = 1;
		else if (c[i] == -39)
			band = 1;
	}

	return (c);
}
