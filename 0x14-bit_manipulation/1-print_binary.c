#include "main.h"
#include <stdlib.h>
/**
 * print_binary - print_binary
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + 48);
}
