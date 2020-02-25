#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{1000, 101, 102},
	};
	int c5[6][6] = {
		{0, 1, 5, 12124, 1234, 2000},
		{10, 11, 12, 123521, 12512, 1000},
		{1000, 101, 102, 12545, 214543435, 100},
		{100, 1012451, 11102, 12545, 214543435, 20},
		{10, 12401, 10452, 11542545, 1214543435, 2},
		{2, 35, 20, 25, 10, 11}
	};
	print_diagsums((int *)c3, 3);
	print_diagsums((int *)c5, 6);
	return (0);
}
