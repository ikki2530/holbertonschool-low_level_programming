#include "holberton.h"
/**
 * prime - returns 1 if the number is prime, 0 is not
 * @n: number
 * @num: limit to evaluate p
 * @p: all values before num
 * Return: 1 if n is prime, 0 if not
 */
int prime(int n, int num, int p)
{
	int res;

	if (n % p == 0 || n < 0 || n == 1)
		return (0);

	if (p < num)
		p++;

	if (p >= num)
		return (1);

	res = prime(n, num, p);

	return (res);
}
/**
 * is_prime_number - returns 1 if the number is prime, 0 is not
 * @n: number
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	int num = (n / 2), p = 2;

	return (prime(n, num, p));
}
