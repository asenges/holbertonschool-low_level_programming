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
	char letter[] = {97, 101, 111, 116, 108, 32};
	char number[] = {52, 51, 48, 55, 49, 32};

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(letter); j++)
			if (s[i] == letter[j] || s[i] == letter[j] - 32)
				s[i] = number[j];
	}

	return (s);
}
