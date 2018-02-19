#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code for Holberton School students.
 * @d: - dog structure
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (!(!d))
	{
		(d->name != NULL) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
		(d->age != 0) ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
		(d->owner != NULL) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
	}
}
