#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: count number of args
 * @argv: array with pointers to each parameter
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int res;

	if (argc - 1 != 2)
	{
		printf("Error\n");
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", res);
	}

	return (0);
}
