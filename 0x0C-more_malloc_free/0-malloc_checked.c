#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - function
 * Return: 0
 * @b: unsigned int
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 2, 2022
 */

void *malloc_checked(unsigned int b)
{
	/*
	if (b != 0)
	{
		void *p = malloc(b);

		if (p == NULL)
			exit(EXIT_FAILURE);
		return (p);
	}
	else
	{
		exit(EXIT_FAILURE);
	}
	*/
	void *p = malloc(b);

 	if (p == NULL)
 		exit(EXIT_FAILURE);
 	return (p);
}
