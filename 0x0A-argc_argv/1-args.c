#include <stdio.h>
/**
 * main - print its name
 * @argc: count number of args
 * @argv: array with pointers to each parameter
 * Return: return 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%i\n", argc - 1);

	return (0);
}
