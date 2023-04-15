#include "main.h"

/**
 * create_file - creates a file and writes text to it
 *
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * @return 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrn, size;

	if (!filename)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!fd)
	return (-1);

	if (text_content == NULL)
	text_content = "";
	size = strlen(text_content);
	wrn = write(fd, text_content, size);
	if (!wrn)
	return (-1);

	close(fd);
	return (1);
}
