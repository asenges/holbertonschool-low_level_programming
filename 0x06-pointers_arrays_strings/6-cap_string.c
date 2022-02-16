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
	size_t i;

	for (i = 0; i < strlen(s); i++)
	{
		/* '\S' '\t' '\n' ',' ';' '.' '!' '?' '"' '(' ')' '{' '}' */
		if ()
		s[i] = (toupper(s[i]));
	}

	return (s);
}
