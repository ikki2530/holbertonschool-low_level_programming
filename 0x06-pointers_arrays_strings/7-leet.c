#include "holberton.h"
/**
 * leet- convert a string to upper
 * @s: string to evaluate
 * Return: string uppercase
 */
char *leet(char *s)
{
	int i;
	int j;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (let[j] == s[i])
			{
				s[i] = num[j];
			}
		}

	}

	return (s);
}
