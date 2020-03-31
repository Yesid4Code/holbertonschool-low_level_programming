#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: string to add at the end of the file.
 *
 * Return: 1: success or -1: failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdwrite, length; /* length is ti length of the content*/

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY, 0600);
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
