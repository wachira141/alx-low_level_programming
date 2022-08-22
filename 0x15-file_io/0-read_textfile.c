#include "main.h"

/**
 * read_textfile - func to read a text
 * @filename: the name of file to read
 * @letters: num of letters to read and print
 * Return: if filename is null return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int opened;
char *buffer;
ssize_t rcount, wcount;

if (filename == NULL)
	return (0);

opened = open(filename, O_RDWR);
if (opened == -1)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
	free(buffer);
	return (0);
}
rcount = read(opened, buffer, letters);
if (rcount == -1)
	return (0);

	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1 || rcount != wcount)
	return (0);
	free(buffer);

	close(opened);
	return (wcount);
}
