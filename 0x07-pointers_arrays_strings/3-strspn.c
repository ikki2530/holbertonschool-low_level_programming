#include "holberton.h"
/**
 * _strspn - locates a character in a string
 * @s: The string which is to be scanned to search the character
 * @accept: The character which is to be searched in the string
 * Return: string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, val;
	unsigned int count = 0;

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
			count++;
		else
			break;
	}

	return (count);
}
