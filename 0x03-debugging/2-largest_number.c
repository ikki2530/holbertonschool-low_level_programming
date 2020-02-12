#include "holberton.h"
/**
 * largest_number - Prints largest number
 * @a: Num to evaluate
 * @b: Num to evaluate
 * @c: Num to evaluate
 * Return: return the result of the file
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && (b > c || b > c))
	{
		largest = a;
	}
	else if (b > a && (a > c || c > a))
	{
		largest = b;
	}
	else if (c > a && (b > a || a > b))
	{
		largest = c;
	}
	else
	{
		if (a == b && a > c)
		{
			largest = a;
		}
		else if (b == c && c > a)
		{
			largest = c;
		}
		else if (c == a && a > b)
		{
			largest = a;
		}
		else
		{
			largest = a;
		}
	}
	return (largest);
}
