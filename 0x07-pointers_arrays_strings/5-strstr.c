#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - searches a string in a string
 * @haystack: string where will find needle
 * @needle: substring to search in haystack
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int lg, i, val = 0, y = 0;

	for (lg = 0; needle[lg] != '\0'; lg++)
	{

	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[y])
		{

			if (needle[y] == '\0')
			{
				val = 1;
				break;
			}

			y++;
		}
		else
			y = 0;

		if (val == 1)
			break;
	}

	if (val == 1)
		return(&haystack[i - lg]);
	else
		return ('\0');
}
