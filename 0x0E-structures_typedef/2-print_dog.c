#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a dog struct
 * @d: Pointer to the dog struct
 *
 * This function prints out the contents of a dog struct. If the pointer to the
 * dog struct is NULL, the function does nothing. If any of the dog's members
 * are NULL, the function prints (nil) instead of the member's value.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
