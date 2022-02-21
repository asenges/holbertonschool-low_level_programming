#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - function
 * Return: char
 * @haystack: char pointer
 * @needle: char pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 21, 2022
 */

char *_strstr(char *haystack, char *needle)
{
	size_t i, j, k, cnt, f;

	i = 0;
	cnt = 0;
	f = 0;

	while (needle[i] != '\0')
	{
		for (j = 0; j < strlen(haystack); j++)
		{
			if (needle[i] == haystack[j])
			{
				haystack += j;
				f = 0;
				break;
			}
		}
		if (f == 0)
			break;
		i++;
	}

	for (k = 0; k < strlen(needle); k++)
	{
		if (haystack[k] == needle[k])
		{
			cnt++;
			if (cnt == strlen(needle))
				return (needle);
						continue;
		}
		else
		{
			printf("NOT EQUAL");
			return (0);
		}
	}

	return (0);
}
