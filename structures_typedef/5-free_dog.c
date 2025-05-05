#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog struct
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
			d->name=NULL;
		}
		if (d->owner)
		{
			free(d->owner);
			d->owner=NULL;
		}
		free(d);
	}
}
