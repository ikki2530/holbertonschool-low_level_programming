#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: The string which is to be scanned to search the character
 * @c: The character which is to be searched in the string
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i, val = 0;
	char *p = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			val = 1;
			break;
		}
	}

	if (val == 1)
		p = &s[i];
		return (p);
	else
		return (p);
}
