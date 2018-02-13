#include <stdio.h>
#include <stdlib.h>
/**
* change_check - Short description, single line
* @change: amount of change
* @current: the change value being evaluted
* Return: 0
*/
int change_check(int change, int current)
{
	if (change % current == 0)
	{
		printf("Change is: %d\n", change);
		return (change);
	}
	else
	{
		printf("Change is: %d\n", change);
		return (change %= current);
	}
}

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
			coins += change_check(change, 25) / 25;
			if (coins >= 1)
				return (coins);
			else
				change %= 25;
		}
		else if (change >= 10)
		{
			coins += change_check(change, 10) / 10;
			if (coins >= 1)
				return (coins);
			else
				change %= 10;
		}
		else if (change >= 5)
		{
			coins += change_check(change, 5) / 5;
			if (coins >= 1)
				return (coins);
			else 
				change %= 10;
		}
		else if (change >= 2)
		{
			coins += change_check(change, 2) / 2;
			if (coins >= 1)
				return (coins);
			else 
				change %= 2;
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
