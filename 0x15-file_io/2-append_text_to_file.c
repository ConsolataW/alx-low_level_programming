#include "main.h"

/*
 * create_function : file appends text at end of a file
 *
 * @filename : name of the file
 * @text_content : is the text to write into the file
 *
 * Return : 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size, wrn;

	if (!filename)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL)
	return (-1);

	size = strlen(text_content);
	size wrn = write(fd, text_content, size);

	{
	if (wrn == -1)
	return -1;
}
