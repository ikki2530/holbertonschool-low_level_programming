#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: number of chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, cl;
	char *s;
	ssize_t rd, wr;

	if (filename == NULL)
		return (0);
	s = malloc(sizeof(char) * (letters));
	if (s == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(s);
		return (0);
	}
	rd = read(fd, s, letters);
	if (rd == -1)
	{
		free(s);
		return (0);
	}
	wr = write(STDOUT_FILENO, s, rd);
	if (wr == -1)
	{
		free(s);
		return (0);
	}
	if (rd != wr)
	{
		free(s);
		return (0);
	}
	cl = close(fd);
	if (cl == -1)
	{
		free(s);
		return (0);
	}
	free(s);
	return (wr);
}
