#include "holberton.h"
#define CHUNCK 1024

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
	char *buf, *file_to, *file_from;

	if (argc == 3)
	{
		file_from = argv[1];
		file_to = argv[2];

		buf = malloc(CHUNCK);

		if (!buf)
			return (0);

		if (!file_from)
		{
			fprintf(stderr, "Error: Can't read from %s\n", file_from);
			exit(98);
		}

		open_ff = open(file_from, O_RDONLY);

		if (open_ff == fail)
		{
			fprintf(stderr, "Error: Can't read from %s\n", file_from);
			exit(98);
		}

		open_ft = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0600);

		if (open_ft == fail)
		{
			fprintf(stderr, "Error: Can't write to %s\n", file_to);
			exit(99);
		}

		if (open_ff)
		{
			while ((rd = read(open_ff, buf, CHUNCK)))
			{
				if (rd << 10 == EOF)
					break;

				if (rd == fail)
					fprintf(stderr, "Error: Can't read from %s\n", file_from);
				else
					write_to = write(open_ft, buf, CHUNCK);
			}
			close(open_ff);

			if (write_to == fail)
			{
				fprintf(stderr, "Error: Can't write to %s\n", file_to);
				exit(99);
			}
		}
		close(open_ft);
		free(buf);
	}
	else
		return (97);
}
