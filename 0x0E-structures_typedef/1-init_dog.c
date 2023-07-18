#include  "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * This function initializes a dog structure with the given name,
 * If the pointer to the dog structure is NULL, the function does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
