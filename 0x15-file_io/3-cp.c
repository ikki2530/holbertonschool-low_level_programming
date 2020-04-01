#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * errorfrom - check for errors in from file
 * @s2: string to be freed
 * @ffrom: file with the text content
 * @n: indicitas if there is an error
 */
void errorfrom(char *s2, char *ffrom, int n)
{
	if (n == -1)
	{
		free(s2);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ffrom);
		exit(98);
	}
}
/**
 * errorto - check for errors in from file
 * @s2: string to be freed
 * @fto: file with the text content
 * @n: indicitas if there is an error
 */
void errorto(char *s2, char *fto, int n)
{
	if (n == -1)
	{
		free(s2);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fto);
		exit(99);
	}
}
/**
 * func_cp - copies the content of ffrom to fto
 * @ffrom: file with the text content
 * @fto: file where the contet will be copy
 * Return: Nothing
 */
void func_cp(char *ffrom, char *fto)
{
	int fdfrom, fdto, rd, wr, clf, clt;
	char *s = malloc(sizeof(char) * 1024);

	if (s == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ffrom);
		exit(98);
	}
	fdfrom = open(ffrom, O_RDONLY);
	printf("fdfrom %d\n", fdfrom);
	errorfrom(s, ffrom, fdfrom);

	fdto = open(fto, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	printf("fdto %d\n", fdto);
	errorto(s, fto, fdto);

	rd = read(fdfrom, s, 1024);
	printf("rd %d\n", rd);
	errorfrom(s, ffrom, rd);

	wr = write(fdto, s, rd);
	printf("wr %d\n", wr);
	errorto(s, fto, wr);
	clf = close(fdfrom);
	clt = close(fdto);
	if (clf == -1)
	{
		free(s);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}
	if (clt == -1)
	{
		free(s);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
	free(s);
	exit(0);
}
/**
 * main - copies the content of a file to another file
 * @ac: numb of arguments in av
 * @av: array of parameters
 * Return: 0 on succes
 */
int main(int ac, char *av[])
{
	char *ffrom, *fto;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (av[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (av[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	ffrom = av[1];
	fto = av[2];
	func_cp(ffrom, fto);
	return (0);
}
