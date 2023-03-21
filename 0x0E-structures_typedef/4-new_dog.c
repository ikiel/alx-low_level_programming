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

	woof = malloc(sizeof(dog_t));
	if (woof == NULL)
		return (NULL);
	name_copy = name;
	owner_copy = owner;
	woof->name = name;
	woof->age = age;
	woof->owner = owner;

	return (woof);
}
