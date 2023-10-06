#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/*putchar*/

int _putchar(char c);
/* reads a text file and prints it to the POSIX standard output.*/

ssize_t read_textfile(const char *filename, size_t letters);

/*function that creates a file.*/

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);


#endif /* _MAIN_H */
