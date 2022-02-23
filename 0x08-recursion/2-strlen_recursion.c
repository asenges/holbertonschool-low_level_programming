#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - function
 * Return: int
 * @s: char pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 23, 2022
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

