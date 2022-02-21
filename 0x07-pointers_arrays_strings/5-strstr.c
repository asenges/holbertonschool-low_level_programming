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
	size_t i, j, k, cnt;

	i = 0;
	cnt = 0;

	while (needle[i] != '\0')
	{
		for (j = 0; j < strlen(haystack); j++)
		{
			if (needle[i] == haystack[j])
			{
				haystack += j;
				for (k = 0; k < strlen(needle); k++)
				{
					if (haystack[k] == needle[k])
					{
						cnt++;
						printf("Bas %c\n", haystack[k]);
						printf("Ned %c\n", needle[k]);
						printf("Cnt %ld\n", cnt);
						printf("Needle len %ld\n", strlen(needle));
						
						if (cnt == strlen(needle))
							return (needle);
						else
							continue;
					}
					else
					{
						printf("NOT EQUAL");
						return (0);
					}
				}
			}
		}
		i++;
	}
	return (0);
}
