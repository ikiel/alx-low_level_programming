#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: dog's age
 * @owner: dog owner's name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog woof = &d;

	woof = malloc(sizeof(struct dog));
	if (woof == NULL)
		return (NULL);
	woof->name = name;
	woof->age = age;
	woof->owner = owner;
}
