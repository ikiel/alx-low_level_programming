#ifndef DOG_H
#define DOG_H

/**
 * struct dog - used to classify dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* #endif DOG_H */