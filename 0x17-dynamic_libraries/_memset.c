/**
 * _memset - check the code for Holberton School students.
 * @s: string
 * @b: string
 * @n: string
 *
 * Return: Always EXIT_SUCCESS.
 */
char *_memset(char *s, char b, unsigned int n)
{
	(void)n;
	s[0] = b;
	return (s);
}
