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
	size_t i, j, k, co;

	i = 0;
	k = 0;
	co = 0;

	while (needle[i] != '\0')
	{
		for (j = 0; j < strlen(haystack); j++)
		{
			if (needle[i] == haystack[j])
			{
				haystack += j;

				while (haystack[k] != '\0')
				{
					if (haystack[k] == needle[k])
						co++;
					else
						break;
					k++;
				}
			}
		}
		i++;
	}
	if (co == strlen(needle))
		return (haystack - (k - 1));
	else
		return ('\0');
}
