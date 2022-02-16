#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - function to copy one string to a destination
 * Return: char ptr
 * @dest: char ptr
 * @src: char ptr
 * @n: int var
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	size_t j, destlen, k;
	destlen = strlen(dest);
	k = n;

	/* Clean Buffer  */
	if (k > destlen - k)
	{
		for (j = 0; j < destlen; j++)
			dest[j] = '\0';
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];




	return (dest);
}
