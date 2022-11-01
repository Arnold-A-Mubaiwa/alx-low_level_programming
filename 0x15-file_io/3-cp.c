#include "main.h"
#include <stdio.h>

/**
 * main - copies content of a file to another
 * @argc: int
 * @argv: char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r = 1, w, cf, ct;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (r != 0)
	{
		r = read(fd_from, buf, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		if (r != 0)
		{	w = write(fd_to, buf, r);
			if (w == -1)
			{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99); }}}
	cf = close(fd_from);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from),
			exit(100); }
	ct = close(fd_to);
	if (ct == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100); }
	return (0); }
