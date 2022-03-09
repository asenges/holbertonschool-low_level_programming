#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function
 * Return: void
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 08, 2022
 */
void free_dog(dog_t *d)
{
	free(d);
}

