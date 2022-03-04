#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - function
 * Return: 0
 * @s1: char
 * @s2: char
 * @n: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 2, 2022
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len, i, j, k;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
	{
		len = strlen(s1) + strlen(s2) + 1;
		j = strlen(s2);
	}
	else
	{
		len = strlen(s1) + n + 1;
		j = n;
	}

	p = malloc(len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		p[i] = s1[i];
	for (k = 0; k < j; k++)
	{
		p[i] = s2[k];
		i++;
	}
	p[i] = '\0';
	return (p);
}
