/**
 * _isalpha - check the code for Holberton School students.
 * @c: string
 *
 * Return: Always EXIT_SUCCESS.
 */
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
