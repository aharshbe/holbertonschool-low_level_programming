#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check the code for Holberton School students.
 * @name: - dog structure
 * @age: - dog structure
 * @owner: - dog structure
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t myNewDog;
	myNewDog = malloc(sizeof(struct dog));

	return (myNewDog);
}
