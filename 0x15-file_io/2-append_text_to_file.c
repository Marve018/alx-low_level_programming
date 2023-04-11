#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 *
 * @filename: The name of the file to append to
 * @text_content: The text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* declear variables */
	int fd, wr, i, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		/*count length ot text*/
		while (text_content[length] != '\0')
			length++;
		/*write the text using a loop*/
		for (i = 0; i < length; i++)
		{
			wr = write(fd, &text_content[i], 1);
			if (wr == -1)
				return (-1);
		}
	}

	close(fd);
	return (1);
}
