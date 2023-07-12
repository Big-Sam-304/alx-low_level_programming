#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file to be read
 * @letters: number of letters to be read from the file
 *
 * Return: actural number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_r, letters_w, file;

	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	letters_r = read(file, buffer, letters);

	letters_w = write(STDOUT_FILENO, buffer, letters_r);

	if (letters_w == -1 || letters_w != letters_r)
	{
		return (0);
	}

	free(buffer);
	close(file);
	return (letters_w);
}
