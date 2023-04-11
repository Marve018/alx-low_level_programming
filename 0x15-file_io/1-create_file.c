#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file.
 * @text_content: text written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	/* declear variables */
	int fd, length = 0, wr = 0;
	mode_t mode = S_IRUSR | S_IWUSR; /* file prmissions */

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		/* write the string to the file */
		wr = write(fd, text_content, length);
		if (wr != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
