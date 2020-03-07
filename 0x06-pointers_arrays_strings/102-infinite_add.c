#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Prints a string in reverse
 * @s: string to reverse
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	int j;
	int itr;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	i--;

	if (i % 2 == 0)
		itr = i / 2;
	else
		itr = (i / 2) + 1;

	for (j = 0; j < itr; j++)
	{
		temp = s[i - j];
		s[i - j] = s[j];
		s[j] = temp;
	}
}

/**
 * _strlen - Prints numbers 0 - 9
 * @s: string to count
 * Return: return the length of a string
 */
int _strlen(char *s)
{
	int count;
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		count++;
	}

	return (count);
}

/**
 * equallg when lg1 and lg2 are equal
 * @n1: number 1
 * @n2: number 2
 * @lg1: lenght of n1
 * @lg2: lenght of n2
 * Return: return a char
 */
char *equallg(char *n1, char *n2, int lg1, int lg2)
{
        int i, sum, add = 0, ld, fd, x = 0;
        char res[100];
	char *p;

	printf("lg1 en equallg %i\n", lg1);
	printf("lg2 en equallg %i\n", lg2);
        for (i = 0; i < lg1; i++)
        {
                sum = (n1[(lg1 - 1) - i] - '0') + (n2[(lg2 - 1) - i] - '0');
		printf("sum %i\n", sum);
                if (add > 0)
                {
                        sum += add;
                        add = 0;
                }
                if (sum >= 10)
                {
                        ld = sum % 10;
                        fd = sum / 10;
                        if (i == lg1 - 1)
			{
                                res[x] = ld + '0';
                                x++;
                                res[x] = fd + '0';
				x++;
                        }
                        else
                        {
                                res[x] = ld + '0';
                                x++;
                                add = fd;
                        }
                }
                else
                {
                        res[x] = sum + '0';
                        x++;
                }
        }
        res[x] = '\0';
	p = res;
        return (p);
}
/**
 * result - return sum of 2 numbers in reverse order
 * @n1: number 1 to add
 * @n2: number 3 to add
 * @lg1: length of n1
 * @lg2: length of n2
 * Return: add result in reverse order
 */
char *sumando(char *n1, char *n2, int lg1, int lg2)
{
	int i, x = 0, num1, num2, sum, ld, fd, add = 0;
	char res[100];
	char *p;

	if (lg1 > lg2)
	{
		for (i = 0; i < lg1; i++)
		{
			if (i < lg2)
			{
				num1 = n1[(lg1 - 1) - i] - '\0';
				num2 = n2[(lg2 - 1) - i] - '\0';
				sum = num1 + num2;
				if (add > 0)
				{
					sum += add;
					add = 0;
				}
				if (sum >= 10)
				{
					ld = (sum % 10);
					fd = (sum / 10);
					res[x] = ld + '\0';
					x++;
					add = fd;
				}
				else
				{
					res[x] = sum + '\0';
					x++;
				}
			}
			else
			{
				sum = n1[(lg1 - 1) - i] - '\0';
				if (add > 0)
				{
					sum += add;
					add = 0;
				}
				if (sum >= 10)
				{
					ld = sum % 10;
					fd = sum / 10;
					if (i == lg1 - 1)
					{
						res[x] = ld + '\0';
						x++;
						res[x] = fd + '\0';
						x++;
					}
					else
					{
						res[x] = ld + '\0';
						x++;
						add = fd;
					}
				}
				else
				{
					res[x] = sum + '\0';
					x++;
				}
			}
		}
	}

	if (lg1 == lg2)
		p = equallg(n1, n2, lg1, lg2);
	else
	{
		res[x] = '\0';
		p = res;
	}
	return (p);
}

/**
 * infinite_add - adds 2 numbers
 * @n1: number
 * @n2: number
 * @r: buffer to save the result
 * @size_r: buffer size
 * Return: result of the add
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int lg1, lg2, lgr;

	for (lg1 = 0; n1[lg1] != '\0'; lg1++)
	{}
	for (lg2 = 0; n2[lg2] != '\0'; lg2++)
	{}
	printf("lg1 %i\n", lg1);
	printf("lg2 %i\n", lg2);
	if (lg1 == lg2)
		r = sumando(n1, n2, lg1, lg2);

	lgr = _strlen(r);
	if (lgr >= size_r)
		return (0);
	else
		rev_string(r);

	return (r);
}
