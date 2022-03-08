#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function
 * Return: void
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 08, 2022
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

