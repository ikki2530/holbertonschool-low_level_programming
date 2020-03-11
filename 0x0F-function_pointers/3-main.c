#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print the number of parameters
 * @argc: count number of args
 * @argv: array with pointers to each parameter
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int num1, num2, r, l;
	char *st, c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	st = argv[2];
	c = st[0];
	l = strlen(argv[2]);
	if (((c != '+') && (c != '-') && (c != '*') && (c != '/') &&
	     (c != '%')) || (l > 1))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((c == '/' || c == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	r = (*get_op_func(st))(num1, num2);

	printf("%d\n", r);

	return (0);

}
