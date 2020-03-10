#include "dog.h"
#include <stdlib.h>

/**
 * _strlen -  returns the length of a string
 *@s: Letter to check
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - function that copies the string pointed to by src
 *@dest: string to check
 *@src: string to check
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

/**
 *new_dog - define a new type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int length1 = 0, length2 = 0;
	char *newname, *newowner;

	length1 = _strlen(name);
	length2 = _strlen(owner);
	newname = malloc(length1 + 1);
	if (!newname)
	{
		return (NULL);
	}
	newowner = malloc(length2 + 1);
	if (!newowner)
	{
		free(newname);
		return (NULL);
	}
	newdog = malloc(sizeof(dog_t));

	if (!newdog)
	{
		free(newname);
		free(newowner);
		return (NULL);
	}
	_strcpy(newname, name);
	_strcpy(newowner, owner);
	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;
	return (newdog);
}
