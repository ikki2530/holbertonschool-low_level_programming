#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the adding of parameters
 * @argc: count number of args
 * @argv: array with pointers to each parameter
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int num, val, ncoins = 0;

	if (argc - 1 == 1)
	{
		num = atoi(argv[1]);
		if (num < 0)
			printf("0\n");
		else
		{
			while (num != 0)
			{
				if (num >= 25)
				{
					val = num / 25;
					ncoins += val;
					num = num - (val * 25);
				}
				else if (num < 24 && num >= 10)
				{
					val = num / 10;
					ncoins += val;
					num = num - (val * 10);
				}
				else if (num < 10 && num >= 5)
				{
					val = num / 5;
					ncoins += val;
					num = num - (val * 5);
				}
				else if (num < 5 && num >= 2)
				{
					val = num / 2;
					ncoins += val;
					num = num - (val * 2);
				}
				else if (num == 1)
				{
					ncoins += num;
					num = 0;
				}
				else
					num = 0;
			}
			printf("%i\n", ncoins);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
