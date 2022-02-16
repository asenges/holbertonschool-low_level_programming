#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * leet - function to upp all characters in array
 * Return: char
 * @s: char ptr
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

char *leet(char *s)
{
	size_t i, j;
	char letter[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	char number[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};


	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < 10; j++)
			if (s[i] == letter[j])
				s[i] = number[j];
	}

	return (s);
}
