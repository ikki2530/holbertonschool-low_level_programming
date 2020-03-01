#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a value is a digit
 * @c: var to evaluate
 * Return: 1 if the value is a digit. 0 otherwise
 */
int _isdigit(char *s)
{
	int j, dc = 0, cc = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 48 && s[j] <= 57)
			dc++;
		else
			cc++;
	}

	printf("valor de j %i\n", j);

	if (dc != 0 && cc == 0)
		return (atoi(s));

	if (dc != 0 && dc != 0)
		return (-1);

	if (j == 1 && dc == 0 && cc != 0)
		return (-1);

	if (dc == 0 && cc != 0)
		return (0);

	if (dc == 0 && cc == 0)
		return (0);

	return (1);
}

/**
 * main - prints all the adding of parameters
 * @argc: count number of args
 * @argv: array with pointers to each parameter
 * Return: return 0
 */
int main(int argc, char **argv)
{

	int i, sum = 0;
	int num;

	for (i = 1; i < argc; i++)
	{
		num = _isdigit(argv[i]);
		printf("valor de num int %i, valor de num %i\n", num, num);

		if (num == -1)
		{
			printf("Error\n");
			return (0);
		}
		else if (num == 0)
		{
			printf("0\n");
			return (0);
		}
		else
			sum += num;
	}

	printf("%i\n", sum);

	return (0);
}
