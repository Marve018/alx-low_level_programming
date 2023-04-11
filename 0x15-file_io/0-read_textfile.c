#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declaring pointer varriable */
	int fd;
	char *buf;
	ssize_t bread, bwrt, count = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* Read the file into the buffer and print it to stdout */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	bread = read(fd, buf, letters);
	close(fd);
	if (bread == -1)
	{
		free(buf);
		return (0);
	}

	bwrt = write(STDOUT_FILENO, buf, bread);
	if (bwrt != bread)
	{
		close(fd);
		return (0);
	}
	count = count + bread;


	close(fd);

	return (count);
}
