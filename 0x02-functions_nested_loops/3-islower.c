#include <stdio.h>
#include "_putchar.c"
#include <ctype.h>

/**
 * _islower - funtion to check if a param is lower
 * Return: int
 * @c: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

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

