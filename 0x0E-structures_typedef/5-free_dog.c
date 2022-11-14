#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: the dog to be free
 */
void free_dog(dog_t *d)
{
	if (d == Null)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
