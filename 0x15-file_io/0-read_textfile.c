#include "main.h"
/**
 * read_textfile - reads a file and prints it
 * @filename: const char*
 * @letters: size_t
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w, c;
	char *buf;


	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);

	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);

	if (w == -1)
	{
		free(buf);
		return (0);
	}
	c = close(fd);
	if (c == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}

