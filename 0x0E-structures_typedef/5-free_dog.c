#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees dogs
 * @d: struct dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free (d->name);
	free (d->owner);
	free (d);
}
