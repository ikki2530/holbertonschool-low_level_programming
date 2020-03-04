#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates strings
 * @ac: width of matrix
 * @av: matrix height
 * Return: a pointer char
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, w, lg, acuml = 0, x = 0;


	if (ac == 0 || av == '\0')
		return ('\0');

	for (w = 0; w < ac; w++)
	{
		for (lg = 0; av[w][lg] != '\0'; lg++)
		{
		}

		acuml += lg;
	}

	p = malloc((acuml + ac + 1) * sizeof(char));
	if (p == '\0')
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[x] = av[i][j];
			x++;
		}

		p[x] = '\n';
		x++;
	}
	return (p);
}
