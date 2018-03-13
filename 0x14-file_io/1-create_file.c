#include "holberton.h"

/**
 * create_file - create file
 * @filename: the filename to read
 * @text_content: content to write
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, ot, fail = -1, success = 1;
	int size = 0;

	if (!filename)
		return (fail);

	while (text_content[size])
		size++;

	fd = open(filename, O_CREAT | O_RDWR, 0600);

	if (fd == fail)
		return (fail);

	ot = write(fd, text_content, size);

	if (ot == fail)
		return (fail);

	close(fd);

	return (success);
}
