#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - function to return last digit of a number
 * Return: int
 * @n: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

int print_last_digit(int n)
{

int lastDigit;

lastDigit = n % 10;
_putchar(lastDigit+'0');
return (lastDigit);

}
