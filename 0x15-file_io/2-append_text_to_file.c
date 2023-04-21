#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rwr = -1;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	if (text_content)
	rwr = write(fd, text_content, strlen(text_content));

	if (rwr == -1)
	{
	close(fd);
	return (-1);
	}

	close(fd);
	return (1);
}
