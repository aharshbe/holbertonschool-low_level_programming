#include <stdio.h>
void first(void) __attribute__((constructor));

/**
 * first - a method that prints something before main is called
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\n");
	printf("I bore my house upon my back!");
	printf("\n");
}
