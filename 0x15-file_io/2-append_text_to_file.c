#include "main.h"
#include <stddef.h>

/**
* append_text_to_file - a function that
*		appends text at the end of a file
* @filename: A pointer to the name of the file
* @text_content: The string to add to the end of the file
*
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wri, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wri = write(fd, text_content, i);

	if (fd == -1 || wri == -1)
		return (-1);

	close(fd);
	return (1);
}
