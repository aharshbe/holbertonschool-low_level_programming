#include "holberton.h"
#define BUFFSIZE 1024
/**
 * main - copy a file's contents
 * @argc: num of arguments
 * @argv: array of arguemnts
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int open_ft, open_ff, fail = -1, write_to, rd;
	char *file_to, *file_from;
	char buf[BUFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	open_ff = open(file_from, O_RDONLY);

	if (open_ff == fail)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	open_ft = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (open_ft == fail)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((rd = read(open_ff, buf, BUFFSIZE)))
	{
		if (rd == fail)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		write_to = write(open_ft, buf, rd);

		if (write_to == fail)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (rd == fail)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(open_ff) == fail)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_ff);
		exit(100);
	}

	if (close(open_ft) == fail)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_ft);
		exit(100);
	}

	return (0);
}


