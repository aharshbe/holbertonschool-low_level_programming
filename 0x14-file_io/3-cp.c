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
	int open_ft, open_ff, fail = -1, write_to, rd, close_ff, close_ft;
	char *buf, *file_to, *file_from;

	if (argc == 3)
	{
		file_from = argv[1];
		file_to = argv[2];

		if (!file_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		if (!file_to)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
			exit(99);
		}

		open_ff = open(file_from, O_RDONLY);

		if (open_ff == fail)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		open_ft = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);

		if (open_ft == fail)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}

		buf = malloc(BUFFSIZE);

		if (!buf)
			return (0);

		while ((rd = read(open_ff, buf, BUFFSIZE)))
		{

			if (rd == fail)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
				exit(98);
			}
			else
			{
				write_to = write(open_ft, buf, BUFFSIZE);

				if (write_to == fail)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
					exit(99);
				}
			}
		}
		close_ff = close(open_ff);

		if (close_ff == fail)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_ff);
			exit(100);
		}

		close_ft = close(open_ft);

		if (close_ft == fail)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_ft);
			exit(100);
		}

		free(buf);
	}
	else
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	return (0);
}
