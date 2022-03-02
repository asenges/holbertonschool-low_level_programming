#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function
 * Return: char pointer
 * @str: char
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 2, 2022
 */

char *_strdup(char *str)
{
	if (strlen(str) != 0)
	{
		char *a = malloc(strlen(str) + 1);

		if (a != NULL)
		{
			strcpy(a, str);
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
