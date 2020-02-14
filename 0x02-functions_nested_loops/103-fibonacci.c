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
	long int v;
	int i = 0;

	while (i <= 48)
	{
		change = n1 + n2;
		n1 = n2;
		n2 = change;

		if (i == 0)
		{
			n2 = 2;
			v += n2;
		}
		else
		{
			if (change % 2 == 0)
			{
				v += change;
			}
		}

		i++;
	}
	printf("%li\n", v);
	putchar('\n');

	return (0);
}
