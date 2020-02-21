#include <stdio.h>
/**
 * main - Prints the first 50 numbers of Fibonacci Serie
 *
 * Return: return 0 value
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%i\n", sum);

	return (0);
}
