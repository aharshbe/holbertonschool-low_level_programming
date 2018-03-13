#include "holberton.h"

/**
 * read_textfile - read a text file and print it to POSIX stdout
 * @filename: the filename to read
 * @letters: the number of letters, buffer size
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, ot, fail = -1;
	char buf[sizeof(void *) * letters];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == fail)
		return (0);

	rd = read(fd, buf, letters);

	if (rd == fail)
		return (0);

	ot = write(STDOUT_FILENO, buf, rd);

	if (ot == fail)
		return (0);

	if (ot != rd)
		return (0);

	close(fd);

	return (ot);
}
