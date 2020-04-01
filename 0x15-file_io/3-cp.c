#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
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
	if (fdfrom == -1)
	{
		free(s);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ffrom);
		exit(98);
	}
	fdto = open(fto, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdto == -1)
	{
		free(s);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fto);
		exit(99);
	}
	do {
		rd = read(fdfrom, s, 1024);
		if (rd == -1)
		{
			free(s);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ffrom);
			exit(98);
		}
		wr = write(fdto, s, rd);
		if (wr == -1)
		{
			free(s);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fto);
			exit(99);
		}
	} while (rd > 0);
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
