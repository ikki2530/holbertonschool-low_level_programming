#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[] = "Hola tarola";
	char b[] = "Que mas a todos";

	_memcpy(a, b, 5);
	printf("New arrays : %s\t%s", a, b);

	return (0);
}
