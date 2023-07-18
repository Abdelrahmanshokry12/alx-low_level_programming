#ifndef DOG_H
#define DOG_H

#include <stddef.h>

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
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
size_t strlen(const char *str);
char *strcpy(char *dest, const char *src);

#endif /* DOG_H */
