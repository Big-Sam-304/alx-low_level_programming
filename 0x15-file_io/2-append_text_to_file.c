#include "main.h"
#include <string.h>

/**
 * if_exists - checks if a file exists
 * @filename: name of the file to check if it exists or not
 *
 * Return: 1 if file exists, 0 if it doesn't
 */

int if_exists(const char *filename)
{
	if (access(filename, F_OK) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * check_permission - checks if a file has write permission
 * @filename: the file to check
 *
 * Return: 1 if the file has write permission
 * else return 0;
 *
 */

int check_permission(const char *filename)
{
	struct stat file_stat;

	if (stat(filename, &file_stat) == -1)
	{
		return (0);
	}

	if (file_stat.st_mode & S_IWUSR)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * append_text_to_file - appends a text to the end of a file
 * @filename: name of a file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int permission, exist, file, len, wrn;

	if (!filename)
	{
		return (-1);
	}

	permission = check_permission(filename);
	exist = if_exists(filename);

	if (permission == 0 || exist == 0)
	{
		return (-1);

	}

	if (text_content == NULL)
	{
		return (1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	len = strlen(text_content);
	wrn = write(file, text_content, len);

	if (wrn == -1)
	{
		return (-1);
	}

	close(file);
	return (1);
}
