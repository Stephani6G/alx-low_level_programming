#include "main.h"

/**
 * read_textfile - a function that reads a text
 *		file and prints it to the standard output
 * @filename: the file name
 * @letters:  no. of letters to be printed
 *
 * Return:  0 if error, otherwise number letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wri;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	wri = write(STDOUT_FILENO, buffer, rd);

	if (fd == -1 || rd == -1 || wri == -1 || wri != rd)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (wri);
}
