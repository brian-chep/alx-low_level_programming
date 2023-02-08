#ifndef MAIN_H
#define MAIN_H

/* malloc, free */
#include <stdlib.h>

/* dprintf */
#include <stdio.h>

/* open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*close */
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POXIS stdout
 * @filename: file to read from
 * @letters: size to read
 * Return: actual number of lettersit could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /*file descriptor */
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (rd);
}
