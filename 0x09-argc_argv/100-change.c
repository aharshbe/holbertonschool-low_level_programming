#include <stdio.h>
#include <stdlib.h>
/**
* check_change - Short description, single line
* @change: amount of change
* Return: 0
*/
int check_change(int change)
{
	int coins = 0;

	while (change >= 1)
	{
		if (change >= 25)
		{
			if (change % 25 == 0)
			{
				coins += change / 25;
				break;
			}
			else
			{
				coins += change / 25;
				change %= 25;
			}
		}
		else if (change >= 10)
		{
			if (change % 10 == 0)
			{
				coins += change / 10;
				break;
			}
			else
			{
				coins += change / 10;
				change %= 10;
			}
		}
		else if (change >= 5)
		{
			if (change % 5 == 0)
			{
				coins += change / 5;
				break;
			}
			else
			{
				coins += change / 5;
				change %= 5;
			}
		}
		else if (change >= 2)
		{
			if (change % 2 == 0)
			{
				coins += change / 2;
				break;
			}
			else
			{
				coins += change / 2;
				change %= 2;
			}
		}
		else if (change >= 1)
		{
			coins += 1;
			change -= 1;
		}
	}
	return (coins);
}
/**
* main - Short description, single line
* @argc: arg count
* @argv: arg vector
* Return: 0
*/
int main(int argc, char **argv)
{
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		printf("%d\n", check_change(change));
	}
	return (0);
}
