#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(void)
{
	int n = 0;
	srand(time(NULL));
	n = rand() * 1000000;
	return (n);
}