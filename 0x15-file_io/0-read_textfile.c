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
	ssize_t letters_r, total_letters_r = 0;

	char buffer[1024];

	FILE *file = fopen(filename, "r");

	if (filename == NULL)
	{
		return (0);
	}

	if (file == NULL)
	{
		return (0);
	}

	while (total_letters_r < (ssize_t)letters &&
		(letters_r = fread(buffer, sizeof(char), sizeof(buffer), file)) > 0)
	{

		if (fwrite(buffer, sizeof(char), letters_r, stdout) !=
			(unsigned long int)letters_r)
		{
			fclose(file);
			return (0);
		}

		total_letters_r += letters_r;

	}

	fclose(file);
	return (total_letters_r);
}
