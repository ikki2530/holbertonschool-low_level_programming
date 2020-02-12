#include "holberton.h"
/**
 * positive_or_negative - Prints zero, positive, or negative
 * @i: Num to evaluate
 * Return: return the result of the file
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
