#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * owner. It is typedef'd as `dog_t` for convenience.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
