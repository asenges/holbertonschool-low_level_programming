#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * print_chessboard - function
 * Return: char
 * @a: char pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 21, 2022
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	
	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}
}