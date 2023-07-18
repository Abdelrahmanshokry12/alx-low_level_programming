#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * This struct contains information about a dog, including its name, age, and
 * owner. It is typedef'd as `dog_t` for convenience.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
