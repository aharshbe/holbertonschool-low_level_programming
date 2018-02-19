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
	char *s_name, *s_owner;

	dog_t *myNewDog = malloc(sizeof(dog_t));

	if (!myNewDog)
		return (NULL);

	if (!name)
	{
		free(myNewDog);
		return (NULL);
	}
	else
	{
		s_name = name;
		myNewDog->name = s_name;
	}

	myNewDog->age = age;

	if (!owner)
	{
		free(myNewDog);
		return (NULL);
	}
	else
	{
		s_owner = owner;
		myNewDog->owner = s_owner;
	}

	return (myNewDog);
}
