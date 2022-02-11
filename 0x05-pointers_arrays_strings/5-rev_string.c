#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - function to print a str in reverse
 * Return: void
 * @s: s pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

void rev_string(char *s)
{
	int i, j;
	int len = strlen(s);
	char rev_str[999];
	
	j = 0;
	for (i = len - 1; i >= 0; i--)
	{
		rev_str[j] = s[i];
		j++;
	}
	
	i = 0;
	for (i = 0; i < len; i++)
	{
		s[i] = rev_str[i];
	}	
}
