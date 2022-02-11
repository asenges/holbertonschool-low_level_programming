#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - function to return the lenght of the str
 * Return: void
 * @s: char pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

int _strlen(char *s)
{
	int len;
	
	len = strlen(s);

	/*
	printf("%s\n", s);
	printf("%ld", strlen(s));
	strcpy(str, s);
	len = strlen(str);
	return (len);
	*/
	return (len);
}

