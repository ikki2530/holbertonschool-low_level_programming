#include "holberton.h"
/**
 * _memeset - fills the first n bytes of s string with b char
 * @s: string
 * @b: char
 * @n: number of times the char b will appear in the s string
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
