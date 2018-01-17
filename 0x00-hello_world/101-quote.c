#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	errno = 1;
	perror("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	exit(1);
}
