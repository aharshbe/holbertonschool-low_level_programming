#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: - dog structure
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

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
	{
		free(myNewDog);
		return (NULL);
	}
	s_name = malloc(sizeof(_strlen(name)));
	s_name = name;
	if (!name)
	{
		free(s_name);
		free(myNewDog);
		return (NULL);
	}
	else
	{
		myNewDog->name = s_name;
	}
	myNewDog->age = age;
	s_owner = malloc(sizeof(_strlen(owner)));
	s_owner = owner;
	if (!owner)
	{
		free(s_name);
		free(s_owner);
		free(myNewDog);
		return (NULL);
	}
	else
	{
		myNewDog->owner = s_owner;
	}
	return (myNewDog);
}
