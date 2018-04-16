/**
 * _strlen - check the code for Holberton School students.
 * @s: string
 *
 * Return: Always EXIT_SUCCESS.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
