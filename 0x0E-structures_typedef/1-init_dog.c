#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * initializeDog - Initializes a struct dog variable.
 * @name: Pointer to the name of the dog.
 * @age: The age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Return: The initialized struct dog variable.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = strdup(name);

	if (d->name == NULL) {
		perror("Memory allocation failed");
		exit(1);
	}

	d->age = age;

	d->owner = strdup(owner);

	if (d->owner == NULL)
	{
		perror("Memory allocation failed");
		free(d->name);
		exit(1);
	}
}
