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

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');

	return (0);

}




