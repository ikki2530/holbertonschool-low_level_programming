#include "holberton.h"
/**
 * swap_int - Swap the variables of a and b
 * @a: value to change
 * @b: value to change
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
