#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: return 0
 */
int main(void)
{
	long int n = 612852475143;
	int res;
	int i;
	int j;

	j = 2;

	for (i = 2; i <= n; i++)
	{
		if (n % j == 0)
		{
			n = (n / j);
		}
		else
		{
			j++;
		}
	}
	res = n;
	printf("%d\n", res);

	return (0);
}
