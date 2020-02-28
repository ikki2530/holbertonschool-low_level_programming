#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: The string which is compare with each char of s
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, val;

	for (i = 0; s[i] != '\0'; i++)
	{
		val = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				val = 1;
				break;
			}
		}

		if (val == 1)
			break;
	}

	if (val == 1)
		return (&s[i]);
	else
		return ('\0');
}
