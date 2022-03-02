#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_array - function
 * Return: char pointer
 * @size: int
 * @c: char
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 2, 2022
 */

char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *a = malloc(sizeof(char) * size);
		size_t i;

		if (a != NULL)
		{
			for (i = 0; i < size; i++)
			{
				a[i] = c;
			}

			return (a);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
}
