#include <stdio.h>
/**
 * main - prints all the arguments
 * @argc: count number of args
 * @argv: array with pointers to each parameter
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
