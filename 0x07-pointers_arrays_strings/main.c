#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char string[] = "This is string.h library function";
	_memset(string, '*', 14);
	puts(string);
	return (0);
}
