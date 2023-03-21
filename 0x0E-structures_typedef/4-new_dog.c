#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new struct dog
 * @name: name of dog
 * @age: dog's age
 * @owner: dog owner's name
 *
 * Return: Struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *woof;

	char *name_copy __attribute__((unused));
	char *owner_copy __attribute__((unused));

	if (name == NULL || owner == NULL)
		return (NULL);
	woof = malloc(sizeof(dog_t));
	if (woof == NULL)
		return (NULL);
	woof->name = malloc(sizeof((char *)name));
	if (woof->name == NULL)
	{
		free(woof);
		return (NULL);
	}
	woof->age = age;
	woof->owner = malloc(sizeof((char *)owner));
	if (woof->owner == NULL)
	{
		free(woof);
		return (NULL);
	}

	return (woof);
}
