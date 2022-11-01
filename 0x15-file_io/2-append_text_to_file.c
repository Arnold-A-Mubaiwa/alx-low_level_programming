#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: char
 * @text_content: char
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (!text_content && fd == -1)
		return (-1);

	else if (fd == -1)
		return (-1);

	else if (!text_content)
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;
	w = write(fd, text_content, len);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);


}
