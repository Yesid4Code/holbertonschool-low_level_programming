#include "holberton.h"

/**
 * read_textfile - function tat reads a text file.
 * @filename: the name of the file.
 * @letters: number of letters to be read and print.
 *
 * Return: Number of letters that the program could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdread, fdwrite, fdclose;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	/* Open filename and save in fd if the process was successful */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /*Check if the file could not be opened*/
	{
		free(buf); /*free reserved memory*/
		return (0);
	}
	/* Read */
	fdread = read(fd, buf, letters);
	if (fdread == -1)
	{
		free(buf); /*free reserved memory*/
		return (0);
	}
	/* Write */
	fdwrite = write(STDOUT_FILENO, buf, fdread);
	if (fdwrite == -1 || fdwrite != fdread)
	{
		free(buf); /*free reserved memory*/
		return (0);
	}
	/* Close the buffer and the  */
	fdclose = close(fd);
	if (fdclose == -1)
	{
		free(buf); /*free reserved memory*/
		return (0);
	}
	free(buf);

	return (fdread);
}
