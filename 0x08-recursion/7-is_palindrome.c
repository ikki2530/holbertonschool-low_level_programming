#include "holberton.h"
/**
 * _strlen_recursion - print string lenght
 * @s: string
 * Return: lenght string
 */
int _strlen_recursion(char *s)
{
	int lg = 0;

	if (*s == '\0')
	{
		return (lg);
	}

	lg = _strlen_recursion(s + 1) + 1;

	return (lg);
}

/**
 * palind - print string lenght
 * @lg: string lenght
 * @i: iteration var
 * @s: string to evaluate
 * Return: lenght string
 */

int palind(int lg, int i, char *s)
{
	int val = lg - i, res;

	if (*(s + i) != *(s + val))
	{
		return (0);
	}

	if (i == lg)
		return (1);
	else if (i < lg)
		i++;

	res = palind(lg, i, s);

	return (res);
}

/**
 * is_palindrome - return1 if is palindrome, 0 is not
 * @s: string to evaluate
 * Return: 1 if n is prime, 0 if not
 */
int is_palindrome(char *s)
{
	int lg2, i = 0;

	lg2 = _strlen_recursion(s);

	lg2 = lg2 - 1;

	return (palind(lg2, i, s));
}
