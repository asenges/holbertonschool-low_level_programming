#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function
 * Return: void
 * @d: dog_t
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 08, 2022
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

