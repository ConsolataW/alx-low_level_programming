#include <main.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nrd, nwr;
	char *buf;

	if (!filename || letters == 0)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
	{
	close(fd);
	return (0);
	}

	nrd = read(fd, buf, letters);

	if (nrd == -1)
	{
	close(fd);
	free(buf);
	return (0);
	}

	nwr = write(STDOUT_FILENO, buf, nrd);

	if (nwr == -1 || nwr != nrd)
	{
	close(fd);
	free(buf);
	return (0);
	}

	close(fd);
	free(buf);

	return (nwr);
}
