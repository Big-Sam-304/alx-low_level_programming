#include "main.h"

#define BUFFER_SIZE 1024

/**
 * exit_with_error - defines how the program will exit in case of an error
 * @msg: message to printed on exit
 * @code: code that defines the error
 *
 * Return: nothing
 */

void exit_with_error(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * copy_content - copies content from one file to another
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 0 on success
 */

int copy_content(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
	}
	if (bytes_read == -1 || fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (bytes_written == -1 || fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		close(fd_to);
		exit(99);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

/**
 * main - checks code
 * @ac: number of arguments passed to the program
 * @av: pointer to the array of arguments passed
 *
 * Return: 0 on success
 */

int main(int ac, char *av[])
{
	int reb;

	if (ac != 3)
	{
		exit_with_error("Usage: cp file_from file_to", 97);
	}

	reb = copy_content(av[1], av[2]);

	return (reb);
}
