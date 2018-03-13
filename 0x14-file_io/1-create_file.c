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
	int fd, ot, fail = -1, success = 1, size = 0;

	if (!filename)
		return (fail);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == fail)
		return (fail);

	if (!text_content)
		return (success);

	while (text_content[size])
		size++;

	ot = write(fd, text_content, size);

	if (ot == fail)
		return (fail);

	if (ot != size)
		return (fail);

	close(fd);

	return (success);
}
