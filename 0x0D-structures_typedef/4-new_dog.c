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

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - check the code for Holberton School students.
 * @s: - dog structure
 * @d: - dog structure
 * Return: Always 0.
 */
char *_strcpy(char *s, char *d)
{
	int size = 0, i = 0;

	size = _strlen(s);

	while (i <= size)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
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

	dog_t *myNewDog;

	myNewDog = malloc(sizeof(dog_t));
	if (myNewDog == NULL)
	{
		free(myNewDog);
		return (NULL);
	}

	s_name = malloc(_strlen(name) + 1);

	if (name == NULL)
	{
		free(s_name);
		free(myNewDog);
		return (NULL);
	}

	s_owner = malloc(_strlen(owner) + 1);

	if (owner == NULL)
	{
		free(s_name);
		free(s_owner);
		free(myNewDog);
		return (NULL);
	}

	myNewDog->name = _strcpy(name, s_name);
	myNewDog->age = age;
	myNewDog->owner = _strcpy(owner, s_owner);

	return (myNewDog);
}
