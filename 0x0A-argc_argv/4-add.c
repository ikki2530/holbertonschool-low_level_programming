#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the adding of parameters
 * @argc: count number of args
 * @argv: array with pointers to each parameter
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0, dc = 0, band = 1;
	char c;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			c = argv[i][j];
			if (c <= 48 || c >= 57)
				band = 0;
			else
				dc++;
		}
		if (band == 1 && dc > 0)
			sum += atoi(argv[i]);
		else
			continue;
	}

	if (dc == 0 && band == 0)
		printf("%i\n", band);
	if (dc > 0 && band == 0)
		printf("Error\n");
	if (dc == 0 && band == 1)
		printf("%i\n", dc);
	if (dc > 0 && band == 1)
		printf("%i\n", sum);

	return (0);
}
