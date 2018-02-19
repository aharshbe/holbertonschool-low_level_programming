#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - check the code for Holberton School students.
 * @d: - dog structure
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
