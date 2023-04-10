#include "main.h"
#include <stdio.h>

/**
 * show_error - shows error if files can't be opened
 * @err_type: type of error
 * @argv: arguments vector
 * Return: void
*/
void show_error(char err_type, char *argv[])
{
	switch (err_type)
	{
		case 'r':
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1])
			exit(98);
			break;
		case 'w':
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2])
			exit(99);
			break;
		default:
			break;
	}
}

/**
 * main - program to copy file from source to destination.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	ssize_t nofchars, bytes_written;
	char buf[1024];
	int close_err;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (file_from == -1)
		show_error('r', argv);
	if (file_to == -1)
		show_error('w', argv);

	nofchars = 1024;
	while (nofchars == 1024)
	{
		nofchars = read(file_from, buf, 1024);
		if (nofchars == -1)
			show_error('r', argv);
		bytes_written = write(file_to, buf, nofchars);
		if (bytes_written == -1)
			show_error('w', argv);
	}

	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", file_from);
		exit(100);
	}

	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
