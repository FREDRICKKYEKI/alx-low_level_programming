#include "main.h"

/**
 * create_file - creates a file with the specified name and writes the given
 *text content to it
 *
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
		return (-1);


	close(fd);

	return (1);
}
