#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function
 * Return: void
 * @d: struct pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 08, 2022
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

