#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>

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
	if (b > 0 && b < INT_MAX)
	{
		void *p = malloc(b);

		if (p == NULL)
			exit(98);
		return (p);
	}
	else
	{
		exit(98);
	}
}
