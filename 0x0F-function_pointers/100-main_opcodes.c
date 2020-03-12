#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of parameters
 * @argc: count number of args
 * @argv: array with pointers to each parameter
 * Return: return 0
 */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int bt, i = 0;

	bt = atoi(&*argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (bt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bt; i++)
	{
		if (i == (bt - 1))
			printf("%02hhx\n", p[i]);
		else
			printf("%02hhx ", p[i]);
	}

	return (0);
}
