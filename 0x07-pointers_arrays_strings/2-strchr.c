#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strchr - function
 * Return: char pointer
 * @s: char pointer
 * @c: char
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 21, 2022
 */

char *_strchr(char *s, char c)
{
	size_t i;
	char *pos;

	pos = s;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			pos = s + i;
			return (pos);
		}
	}
	return (NULL);
}
