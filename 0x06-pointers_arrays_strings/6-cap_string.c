#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - function to upp all characters in array
 * Return: char
 * @s: char ptr
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

char *cap_string(char *s)
{
	size_t i, j;
	char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; i < strlen(s); i++)
	{
		if (i == 0)
			s[i] = (toupper(s[i]));

		for (j = 0; j < strlen(sep); j++)
			if (sep[j] == s[i - 1])
				s[i] = (toupper(s[i]));
	}

	return (s);
}
