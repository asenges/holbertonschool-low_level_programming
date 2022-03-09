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
	int i;
	dog_t *b = NULL;

	b = malloc(sizeof(dog_t));
	if (b)
	{

		(*b).name = malloc(strlen(name) + 1);
		if ((*b).name)
		{
			for (i = 0; name[i]; i++)
				(*b).name[i] = name[i];
			(*b).name[i] = '\0';
		}
		else
		{
			free(b);
			return (NULL);
		}

		(*b).age = age;

		(*b).owner = malloc(strlen(owner) + 1);
		if ((*b).owner)
		{
			for (i = 0; owner[i]; i++)
				(*b).owner[i] = owner[i];
			(*b).owner[i] = '\0';
		}
		else
		{
			free((*b).name);
			free(b);
			return (NULL);
		}
	}
	return (b);
}

