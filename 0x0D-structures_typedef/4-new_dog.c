#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* _strdup - print every other character
* @s: Description of parameter n
* Return: 0
*/
char *_strdup(char *s)
{
	char *d, *tmp;
	int size = 0, i = 0;

	while (s[size] != '\0')
		size++;
	d = malloc(size + 1);
	if (!d)
		return (NULL);
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	tmp = d;
	return (tmp);
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

	dog_t *myNewDog = malloc(sizeof(dog_t));

	if (!myNewDog)
		return (NULL);

	if (!name)
	{
		free(myNewDog->name);
		free(myNewDog);
		return (NULL);
	}
	else
	{
		myNewDog->name = _strdup(name);
	}

	myNewDog->age = age;

	if (!owner)
	{
		free(myNewDog->name);
		free(myNewDog->owner);
		free(myNewDog);
		return (NULL);
	}
	else
	{
		myNewDog->owner = _strdup(owner);
	}
	return (myNewDog);
}
