#include "main.h"

/**
* create_file -  function that creates a file
* @filename: A pointer to the name of the file to create
* @text_content: A pointer to a string to write to the file
*
* Return: On fail -1 , on succes 1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, wri, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	wri = write(fd, text_content, i);

	if (fd == 1 || wri == -1)
		return (-1);

	close(fd);
	return (1);
}
