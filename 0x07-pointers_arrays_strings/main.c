#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "xi,";
	char *t;

	t = _strpbrk(s, f);
	if (t != NULL)
		printf("%s\n", t);
	else
		puts("valor NULL\n");
	return (0);
}
