#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a value is a digit
 * @c: var to evaluate
 * Return: 1 if the value is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}

/**
 * main - prints all the adding of parameters
 * @argc: count number of args
 * @argv: array with pointers to each parameter
 * Return: return 0
 */
int main(int argc, char **argv)
{

	int i, j, sum = 0, band;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (_isdigit(argv[i][j]))
			{
			}
			else
			{
				band = 1;
				break;
			}
		}

		if (band == 1)
		{
			
		}
	}

	return (0);
}
