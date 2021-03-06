#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - compare 2 strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: dest string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int val;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			val = 0;
		else
		{
			val = (s1[i] - '0') - (s2[i] - '0');
			return (val);
		}
		i++;
	}

	return (val);
}
