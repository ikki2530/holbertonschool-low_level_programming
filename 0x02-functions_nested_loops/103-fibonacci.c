#include <stdio.h>
/**
 * main - Prints the sum of the even-valued terms in Fibonacci serie
 *
 * Return: return 0 value
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int change = 0;
	long int v = 0;
	int i = 0;

	while (change < 4000000)
	{
		change = n1 + n2;
		n1 = n2;
		n2 = change;

		if (i == 0)
		{
			v += change - 1;
		}
		else
		{
			if (change % 2 == 0)
			{
				v += change;
			}
		}
		printf("change %li  n1 %li   n2 %li\n", change, n1, n2);

		i++;
	}
	putchar('\n');

	return (0);
}
