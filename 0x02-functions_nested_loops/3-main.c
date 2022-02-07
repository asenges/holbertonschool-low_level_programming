#include <stdio.h>
#include "main.h"


/**
 * main - program to check if char is lower
 * Return: 0
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

int main(void)
{

	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);

}

