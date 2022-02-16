#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h> 

/**
 * string_toupper - function to upp all characters in array
 * Return: char
 * @s: char ptr
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

char *string_toupper(char *s)
{
	size_t i;

	for (i = 0; i < strlen(s); i++)
	{
		s[i] = (toupper(s[i]));
	}

	return (s);
}
