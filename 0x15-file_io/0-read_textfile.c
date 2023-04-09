/*
 * file:0-read_textfile.c
 * auther:Peter Aniefiok
 */

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a textfile and print it to POSIX stdout
 * @filename: a pointer to the file
 * @letters: the numbers of letters the function should print and read
 *
 * Return: if the function fails - 0
 *	0/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t s, p, n;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	s = open(filename, O_RDONLY);
	p = read(s, buffer, letters);
	n = write(STDOUT_FILENO, buffer, p);

	if (s == -1 || p == -1 || n == -1 || n != p)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(s);

	return (n);
}
