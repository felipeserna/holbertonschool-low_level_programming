#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
	}
}
