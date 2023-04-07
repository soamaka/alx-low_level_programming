#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints it to the
 *  POSIX standard output.
 *  @letters: number of letters it should read and print
 *  @filename: pointer to the file name
 *
 *  Return: the actual number of letters it could read and print
 *  0 if the file cannot be opened or read; if the file name is NULL
 *  0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t w, t, fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);

	return (w);
}
