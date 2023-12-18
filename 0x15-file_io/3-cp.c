#include "main.h"

char *create_buffer(char *filename);
void close_file(int fd);

/**
* create_buffer - function that allocates
*		1024 bytes for a buffer
* @filename: the name of the file
*		the buffer is storing characters for
* Return: pointer to the allocated buffer
*/

char *create_buffer(char *filename)
{
	char *buffer;

	buf = malloc(1024 * sizeof(char));

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
* close_file - function that  closes the file descriptor
* @fd: file descriptor to be closed
*/

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - program that copies contents
*		of one file to another file
* @argc: the number of arguments
* @argv: array of pointers to the arguments
* Desc: exit code 97 (if the argument count is incorrect)
* exit code 98 (if the file_from does not exist or cannot be read)
* exit code 99 (if the file_to cannot be created or written to
* exit code 100 (if the file_to or file_from cannot be closed)
* Return: Always success (0)
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wri;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buf, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wri = write(file_to, buffer, rd);
		if (file_to == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
