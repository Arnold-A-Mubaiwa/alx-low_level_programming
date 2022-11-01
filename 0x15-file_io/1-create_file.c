#include "main.h"

/**
 *create_file - creates a file
 *@filename: name of the file
 *@text_content: contents
 *Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, x;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	x = write(fd, text_content, len);
	if (x == -1)
		return (-1);

	close(fd);
	return (1);
}
