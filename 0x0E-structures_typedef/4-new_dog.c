#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function
 * Return: void
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 08, 2022
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(strlen(name) + 1);
	my_dog->owner = malloc(strlen(owner) + 1);

	if (my_dog->name != NULL)
	{
		strcpy(my_dog->name, name);
	}
	else
	{
		free(my_dog->name);
		return (NULL);
	}

	if (my_dog->owner != NULL)
	{
		strcpy(my_dog->owner, owner);
	}
	else
	{
		free(my_dog->name);
		free(my_dog->owner);
		return (NULL);
	}

	strcpy(my_dog->name, name);
	strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}

