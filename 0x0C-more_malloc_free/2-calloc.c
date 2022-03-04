#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - function
 * Return: void
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 2, 2022
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			a[i] = 0;
		}
	}
	return (a);
}

