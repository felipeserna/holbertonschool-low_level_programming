#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
