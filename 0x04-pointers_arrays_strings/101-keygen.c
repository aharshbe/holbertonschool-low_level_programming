#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
/**
* main - print every other character
* Return: 0
*/
int main(void)
{
	int n = 0;

	srand(time(NULL));
	n = rand() * 10000000;
	return (n);
}
