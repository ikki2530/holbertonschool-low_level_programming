#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "Helloworld!";
	char *f;

	f = _strchr(s, 'i');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	else
		puts("Null value");

	return (0);
}
