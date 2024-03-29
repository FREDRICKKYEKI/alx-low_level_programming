#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: the text content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nofletters;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (nofletters = 0; text_content[nofletters]; nofletters++)
			;

		bytes_written = write(fd, text_content, nofletters);

		if (bytes_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
