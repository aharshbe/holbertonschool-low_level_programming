/**
* init_dog
* d - dog
* name - name
* age - age
* owner - owner
**/
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}