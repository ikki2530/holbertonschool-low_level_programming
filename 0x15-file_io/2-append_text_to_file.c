#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * append_text_to_file - add content to a file
 * @filename: name of the file
 * @text_content: number of letters it should add to the file
 * Return: 1 for success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, lg = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
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
