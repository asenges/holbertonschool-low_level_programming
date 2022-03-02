#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function
 * Return: char pointer
 * @s1: char
 * @s2: char
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 2, 2022
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	size_t i;
	size_t j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = malloc(strlen(s1) + strlen(s2) + 1);

	if (a != NULL)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			a[i] = s1[i];
		}

		for (j = 0; j < strlen(s2); j++)
		{
			a[i] = s2[j];
			i++;
		}
		return (a);
	}
	return (NULL);
}
