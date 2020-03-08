#include <stdio.h>
/**
 * main - Prints the first 100 numbers of Fibonacci Serie
 * Return: return 0 (success)
 */
int main(void)
{
	long double n1 = 1;
	long double n2 = 2;
	long double temp;
	int i = 0;
	int pr = 0;

	while (i < 97)
	{

		if (i == 0)
		{
			printf("%Lf, %Lf, ", n1, n2);
			pr++;
		}
		else
		{
			printf("%Lf", temp);
			if (i != 96)
			{
				putchar(',');
				putchar(' ');
			}
		}
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		i++;
	}
	putchar('\n');

	return (0);
}
