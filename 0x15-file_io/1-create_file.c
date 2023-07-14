#include <string.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created, or truncated if it exists
 * @text_content: content to be written into the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_w, file_flags, file_permissions, len;

	if (filename == NULL)
	{
		return (-1);
	}

	file_flags = O_WRONLY | O_CREAT | O_TRUNC;
	file_permissions = S_IRUSR | S_IWUSR;

	fd = open(filename, file_flags, file_permissions);
	if (fd == -1)
	{
		return (-1);
	}

	len = 0;

	while (text_content[i])
	{
		len++;
	}

	if (text_content != NULL)
	{
		bytes_w = write(fd, text_content, len);
		if (bytes_w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (-1);
}
