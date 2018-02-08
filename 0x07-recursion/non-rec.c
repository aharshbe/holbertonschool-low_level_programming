int find(int x)
{
	int num = x;

	while (num * num != x)
	{
		if (num < 0)
			return (-1);
		if (num * num > x)
		{
			num -= 1;
		}
		else
		{
			if (num / 2 == 1)
				return (-1);
			num /= 2;
		}
	}
	return (num);
}
