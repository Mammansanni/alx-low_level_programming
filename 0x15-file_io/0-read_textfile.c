#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that read a text file and print it to standard output
 * @filename: text file being read
 * where letters is the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * 0 if the file is NULL or cannot be opened and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ams;
	ssize_t sa;
	ssize_t w;
	ssize_t t;

	sa = open(filename, O_RDONLY);
	if (sa == -1)
		return (0);
	ams = malloc(sizeof(char) * letters);
	t = read(sa, ams, letters);
	w = write(STDOUT_FILENO, ams, t);

	free(ams);
	close(sa);
	return (w);
}
