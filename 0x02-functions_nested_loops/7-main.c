#include <stdio.h>
#include "main.h"


/**
 * main - program to print last digit of a number
 * Return: 0
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

int main(void)
{

	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');

	return (0);


}




