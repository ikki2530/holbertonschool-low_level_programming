#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints the last digit of n
 * @n: number to evaluate
 * Return: return las digit of n
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else if (n == 98)
	{
		printf("%d\n", 98);
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
}
