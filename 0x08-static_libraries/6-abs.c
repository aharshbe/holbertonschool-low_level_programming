/**
 * _abs - Short description, single line
 * @n: Description of parameter c
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n + (-n * 2));
	}
	else
	{
		return (0);
	}

}
