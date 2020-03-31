#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the to create.
 * @text_content: content of the file to copy in filename.
 *
 * Return: 1: success, -1: on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fdwrite, length; /* length is ti length of the content*/

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content) /* if text_content exist */
	{
		while (text_content[length])
			length++;

		fdwrite = write(fd, text_content, length);
		if (fdwrite == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
