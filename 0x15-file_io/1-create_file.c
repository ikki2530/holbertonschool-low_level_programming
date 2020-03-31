#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: number of letters it should read and print
 * Return: number of chars
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lg = 0, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (lg = 0; text_content[lg] != '\0'; lg++)
		{
		}
	}
	else
		text_content = "";

	wr = write(fd, text_content, lg);
	if (wr == -1)
		return (-1);
	close(fd);

	return (1);
}
