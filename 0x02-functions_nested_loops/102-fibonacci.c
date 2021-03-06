#include <stdio.h>
/**
 * main - Prints the first 50 numbers of Fibonacci Serie
 *
 * Return: return 0 value
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int change;
	int i = 0;

	while (i <= 48)
	{
		change = n1 + n2;
		n1 = n2;
		n2 = change;

		if (i == 0)
		{
			n1 = 1;
			n2 = 2;
			change = n1 + n2;
			printf("%li, %li, ", n1, n2);
		}
		else
		{
			printf("%li", change);

			if (i <= 47)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
